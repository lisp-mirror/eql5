// copyright (c) Polos Ruetz

#include "dyn_object.h"
#include "ecl_fun.h"
#include "gen/_lobjects.h"
#include <QMetaMethod>
#include <QEvent>
#include <QApplication>
#include <QtDebug>

int DynObject::slot_id             = 0;
int DynObject::event_filter_handle = 0;
QObject* DynObject::currentSender  = 0;

DynObject::DynObject(QObject* par) : QObject(par), event_filters(false) {
    qApp->installEventFilter(this); }

int DynObject::qt_metacall(QMetaObject::Call c, int id, void** args) {
    if(QMetaObject::InvokeMetaMethod == c) {
        int index = slot_ids.indexOf(id);
        if(index != -1) {
            currentSender = signal_senders.at(index);
            callConnectFun(slot_functions.at(index), slot_types.at(index), args); }}
    return -1; }

bool DynObject::connect(QObject* from, const char* signal, DynObject* dyn, void* function) {
    int signal_id = from->metaObject()->indexOfSignal(signal + 1);
    if(signal_id != -1) {
        int new_slot_id = ++slot_id;
        dyn->signal_senders << from;
        dyn->signal_ids << signal_id; 
        dyn->slot_ids << new_slot_id; 
        dyn->slot_functions << function;
        dyn->slot_types << from->metaObject()->method(signal_id).parameterTypes();
        return QMetaObject::connect(from, signal_id, dyn, new_slot_id); }
    return false; }

bool DynObject::disconnect(QObject* from, const char* signal, DynObject* dyn, void* function) {
    bool ok = false;
    int signal_id = signal ? from->metaObject()->indexOfSignal(signal + 1) : -1;
    int i = 0;
    while(i < dyn->slot_ids.size()) {
        bool remove = false;
        if(from == dyn->signal_senders.at(i)) {
            remove = (signal_id == -1) ? true : (dyn->signal_ids.at(i) == signal_id);
            if(remove && function) {
                remove = (dyn->slot_functions.at(i) == function); }
            if(remove) {
                if(QMetaObject::disconnect(from, signal_id, dyn, dyn->slot_ids.at(i))) {
                    ok = true; }
                dyn->signal_senders.removeAt(i);
                dyn->signal_ids.removeAt(i);
                dyn->slot_ids.removeAt(i);
                dyn->slot_functions.removeAt(i);
                dyn->slot_types.removeAt(i); }}
        if(!remove) {
            i++; }}
    return ok; }

void DynObject::removeConnections(QObject* object) {
    disconnect(object, 0, LObjects::dynObject, 0); }

int DynObject::addEventFilter(QObject* object, int type, void* function) {
    event_filters = true;
    event_ids << ++event_filter_handle;
    event_types << type;
    event_funs << function;
    event_objects << object;
    return event_filter_handle; }

bool DynObject::removeEventFilter(int id) {
    int i = event_ids.indexOf(id);
    if(i != -1) {
        event_ids.remove(i);
        event_types.remove(i);
        event_funs.remove(i);
        event_objects.remove(i);
	if(!event_ids.size()) {
            event_filters = false; }
        return true; }
    return false; }

void DynObject::clearEventFilters() {
    event_filters = false;
    event_ids.clear();
    event_types.clear();
    event_funs.clear();
    event_objects.clear(); }

bool DynObject::eventFilter(QObject* object, QEvent* event) {
    if(event_filters && object->isWidgetType()) {
        for(int i = 0; i < event_objects.size(); ++i) {
            if(!event_objects.at(i) || (object == event_objects.at(i))) {
                if(event->type() == event_types.at(i)) {
                    if(callEventFun(event_funs.at(i), object, event)) {
                        return true; }}}}}
    return QObject::eventFilter(object, event); }
