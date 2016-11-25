// original copyright:
//
// ** Copyright (C) 2010 Nokia Corporation and/or its subsidiary(-ies).
// ** You may use this file under the terms of the BSD license

#ifndef TRAFFICLIGHT_H
#define TRAFFICLIGHT_H

#include <QtWidgets>

class LightWidget : public QWidget
{
    Q_OBJECT
    Q_PROPERTY(bool on READ isOn WRITE setOn)
public:
    LightWidget(const QColor &color, QWidget *parent = 0)
        : QWidget(parent), m_color(color), m_on(false) {}

    bool isOn() const
        { return m_on; }
    void setOn(bool on)
    {
        if (on == m_on)
            return;
        m_on = on;
        update();
    }

public slots:
    void turnOff() { setOn(false); }
    void turnOn() { setOn(true); }

protected:
    virtual void paintEvent(QPaintEvent *);

private:
    QColor m_color;
    bool m_on;
};

class TrafficLightWidget : public QWidget
{
public:
    TrafficLightWidget(QWidget *parent = 0)
        : QWidget(parent)
    {
        QVBoxLayout *vbox = new QVBoxLayout(this);
        m_red = new LightWidget(Qt::red);
        m_red->setObjectName("red");
        vbox->addWidget(m_red);
        m_yellow = new LightWidget(Qt::yellow);
        m_yellow->setObjectName("yellow");
        vbox->addWidget(m_yellow);
        m_green = new LightWidget(Qt::green);
        m_green->setObjectName("green");
        vbox->addWidget(m_green);
        QPalette pal = palette();
        pal.setColor(QPalette::Background, Qt::black);
        setPalette(pal);
        setAutoFillBackground(true);
    }

    LightWidget *redLight() const
        { return m_red; }
    LightWidget *yellowLight() const
        { return m_yellow; }
    LightWidget *greenLight() const
        { return m_green; }

private:
    LightWidget *m_red;
    LightWidget *m_yellow;
    LightWidget *m_green;
};

class TrafficLight : public QWidget
{
    Q_OBJECT
public:
    TrafficLight(QWidget *parent = 0)
        : QWidget(parent)
    {
        QVBoxLayout *vbox = new QVBoxLayout(this);
        TrafficLightWidget *widget = new TrafficLightWidget();
        vbox->addWidget(widget);
        vbox->setMargin(0);

        machine = new QStateMachine(this);
        QState *redGoingYellow = createLightState(widget->redLight(), 2000);
        redGoingYellow->setObjectName("redGoingYellow");
        QState *yellowGoingGreen = createLightState(widget->yellowLight(), 500);
        yellowGoingGreen->setObjectName("yellowGoingGreen");
        redGoingYellow->addTransition(redGoingYellow, SIGNAL(finished()), yellowGoingGreen);
        QState *greenGoingYellow = createLightState(widget->greenLight(), 2000);
        greenGoingYellow->setObjectName("greenGoingYellow");
        yellowGoingGreen->addTransition(yellowGoingGreen, SIGNAL(finished()), greenGoingYellow);
        QState *yellowGoingRed = createLightState(widget->yellowLight(), 500);
        yellowGoingRed->setObjectName("yellowGoingRed");
        greenGoingYellow->addTransition(greenGoingYellow, SIGNAL(finished()), yellowGoingRed);
        yellowGoingRed->addTransition(yellowGoingRed, SIGNAL(finished()), redGoingYellow);

        machine->addState(redGoingYellow);
        machine->addState(yellowGoingGreen);
        machine->addState(greenGoingYellow);
        machine->addState(yellowGoingRed);
        machine->setInitialState(redGoingYellow);
        machine->start();
    }

    QState *createLightState(LightWidget *light, int duration, QState *parent = 0)
    {
        QState *lightState = new QState(parent);
        QTimer *timer = new QTimer(lightState);
        timer->setInterval(duration);
        timer->setSingleShot(true);
        QState *timing = new QState(lightState);
        QObject::connect(timing, SIGNAL(entered()), light, SLOT(turnOn()));
        QObject::connect(timing, SIGNAL(entered()), timer, SLOT(start()));
        QObject::connect(timing, SIGNAL(exited()), light, SLOT(turnOff()));
        QFinalState *done = new QFinalState(lightState);
        timing->addTransition(timer, SIGNAL(timeout()), done);
        lightState->setInitialState(timing);
        return lightState;
    }

    Q_INVOKABLE void start() { machine->start(); }
    Q_INVOKABLE void stop() { machine->stop(); }

private:
    QStateMachine *machine;

};

#endif
