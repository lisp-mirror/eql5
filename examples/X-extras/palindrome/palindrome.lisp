;;; Palindrome "PATERNOSTER"
;;;
;;; N.B: If you load this file in Slime, you need to use QLOAD instead of LOAD!

#-qt-wrapper-functions ; see README-OPTIONAL.txt
(load (in-home "src/lisp/all-wrappers"))

(in-package :eql-user)

(require :definitions "definitions")

(defvar *generate-html/js-version* nil) ; command line option :html

(dolist (arg (mapcar 'read-from-string (|arguments.QCoreApplication|)))
  (if (numberp arg)
      (if (integerp arg)
          (setf *window-width* arg)
          (setf *window-opacity* arg))
      (when (eql :html arg)
        (setf *generate-html/js-version* t)))
  (when (and *generate-html/js-version*
             (not *window-width*))
    (setf *window-width* 450)))

(defconstant +state-switch-event+ (+ |QEvent.User| 256))
(defconstant +size+               20)

(defparameter *item-size* (list +size+ +size+))
(defparameter *view-size* (list (* +size+ (length (caar *states*)))
                                (* +size+ (length (car *states*)))))
(defparameter *color-m*   nil)

(defvar *main*  (qnew "QWidget"
                      "mouseTracking" t
                      "windowOpacity" *window-opacity*))
(defvar *view*  (qnew "QGraphicsView"
                      "mouseTracking" t
                      "frameShape" |QFrame.NoFrame|))
(defvar *timer* (qnew "QTimer"
                      "singleShot" t))

(defmacro push* (item list)
  `(setf ,list (nconc ,list (list ,item))))

;;; custom easing curve (see both "../cpp/lib.h" and "exe/main.h")
;;; see CUSTOM-EASING-FUNCTION in "definitions.lisp"

(let (curve)
  (defun custom-easing-curve ()
    (or curve
        (setf curve (cond ((directory "*easing_curve.*")
                           (! "easingCurve" (:qt (qload-c++ "easing_curve"))))
                          ((string= "Qt_EQL_Application"
                                    (|className| (|metaObject| (qapp))))
                           (! "easingCurve" (:qt (qapp))))
                          (t
                           (qnew "QEasingCurve(QEasingCurve::Type)" |QEasingCurve.Linear|))))))) ; fallback

;;; state-switch-event

(let (event-n)
  (defun new-state-switch-event (n)
    (setf event-n n)
    (qnew "QEvent(QEvent::Type)" +state-switch-event+))
  (defun event-number ()
    event-n))

;;; state-switch-transition

(defstruct (state-switch-transition (:conc-name transition-))
  (q      (qnew "QAbstractTransition"))
  (number nil))

(defmethod the-qt-object ((object state-switch-transition))
  (transition-q object))

(defun new-state-switch-transition (n)
  (let ((trans (make-state-switch-transition :number n)))
    (qoverride trans "eventTest(QEvent*)"
               (lambda (event)
                 (and (= +state-switch-event+
                         (|type| event))
                      (= (transition-number trans)
                         (event-number)))))
    trans))

;;; state-switcher

(defstruct (state-switcher (:conc-name :switcher-))
  (q           nil)
  (state-count 0)
  (last-index  0))

(defmethod the-qt-object ((object state-switcher))
  (switcher-q object))

(let ((ini t))
  (defun new-state-switcher (machine name)
    (let ((switch (make-state-switcher :q (qnew "QState(QState*)" machine
                                                "objectName" name))))
      (qoverride switch "onEntry(QEvent*)"
                 (lambda (event)
                   (let ((n (1+ (switcher-last-index switch))))
                     (when (> n (switcher-state-count switch))
                       (setf n 1))
                     (when ini
                       (setf ini nil)
                       (incf n)
                       (|setInterval| *timer* (* 2 *duration*)))
                     (setf (switcher-last-index switch) n)
                     (|postEvent| (|machine| switch)
                                  (new-state-switch-event n)))))
      switch)))

;;;
;;; main
;;;

(defvar *font*           (x:let-it (|font.QApplication|) (|setBold| x:it t)))
(defvar *graphics-items* nil)

(let (items)
  (defun new-graphics-item (text color id)
    (when *generate-html/js-version*
      (save-item-pixmap text color id))
    (let ((item (qnew "QGraphicsWidget")))
      (qoverride item "paint(QPainter*,QStyleOptionGraphicsItem*,QWidget*)"
                 (lambda (painter s w)
                   (x:do-with painter
                     (|fillRect| (mapcar '+ (|rect| item) '(1 1 -2 -2)) color)
                     (|setFont| *font*)
                     (|setPen| "black")
                     (|drawText| (|rect| item) |Qt.AlignCenter| text))))
      (push (cons id item) *graphics-items*)
      item))
  (defun id-item (id)
    (cdr (assoc id *graphics-items*)))
  (defun items ()
    (or items (setf items
                    (loop :for i :to (1- (length *graphics-items*))
                      :collect (id-item (intern (string (code-char (+ i #.(char-code #\A)))))))))))

(defun create-geometry-state (parent objects positions)
  (let ((result (qnew "QState(QState*)" parent)))
    (mapc (lambda (object pos)
            (|assignProperty| result object "geometry" (qnew "QVariant(QRect)"
                                                             (append (mapcar '* (mapcar '- pos '(1 1)) *item-size*)
                                                                     *item-size*))))
          objects positions)
    result))

(defun add-state (state-switcher state animation)
  (let ((trans (new-state-switch-transition (incf (switcher-state-count state-switcher)))))
    (x:do-with trans
      (|setTargetState| state)
      (|addAnimation| animation))
    (|addTransition| state-switcher trans)))

(let (animations groups)
  (defun add-property-animation (anim-group button property curve-type duration &optional pause)
    (let ((anim (qnew "QPropertyAnimation(QObject*,QByteArray)" button (x:string-to-bytes property)))
          (group (if pause
                     (let ((group (qnew "QSequentialAnimationGroup(QObject*)" anim-group)))
                       (|addPause| group pause)
                       (push* group groups)
                       group)
                     anim-group)))
      (x:do-with anim
        (|setDuration| duration)
        (|setEasingCurve| (if (= |QEasingCurve.Custom| curve-type)
                              (custom-easing-curve)
                              (qnew "QEasingCurve(QEasingCurve::Type)" curve-type))))
      (push* anim animations)
      (|addAnimation| group anim)
      anim))
  (defun change-easing-curve (curve)
    (let* ((type (etypecase curve
                   (integer
                     curve)
                   (string
                     (symbol-value (intern (x:cc "QEasingCurve." curve))))))
           (curve (if (= |QEasingCurve.Custom| type)
                      (custom-easing-curve)
                      (qnew "QEasingCurve(QEasingCurve::Type)" type))))
      (setf *easing-curve* curve)
      (dolist (anim animations)
        (|setEasingCurve| anim curve))))
  (defun change-duration (msec)
    (setf *duration* msec)
    (dolist (anim animations)
      (|setDuration| anim msec))
    (update-timer))
  (defun change-pause (msec)
    (setf *pause* msec)
    (let ((n 0))
      (dolist (group groups)
        (let ((anim (|takeAnimation| group 1)))
          (x:do-with group
            (|clear|)
            (|addPause| (* (incf n) msec))
            (|addAnimation| anim)))))
    (update-timer))
  (defun update-timer ()
    (|setInterval| *timer* (+ *duration* (* 4 *pause*) 1000))))

(defun item-count ()
  (loop :for item :in *items*
        :sum (length (third item))))

(defun create-geometry-states (group)
  (flet ((item-pos (char list)
           (let ((y 0))
             (dolist (state list)
               (incf y)
               (x:when-it (position char state)
                 (return-from item-pos (list (1+ x:it) y)))))))
    (let ((letters (loop :for i :to (item-count) :collect (code-char (+ i #.(char-code #\a)))))
          states)
      (dolist (state *states*)
        (let (positions)
          (dolist (char letters)
            (push* (item-pos char state)
                   positions))
          (push* (create-geometry-state group (items) positions)
                 states)))
      states)))

(defun ini ()
  (dolist (item *items*)
    (let ((text (first item))
          (color (second item)))
      (dolist (id (third item))
        (new-graphics-item text (if (eql 'm id) (setf *color-m* color) color) id))))
  (let ((scene      (qnew "QGraphicsScene"
                          "sceneRect" (append '(0 0) *view-size*)))
        (machine    (qnew "QStateMachine"))
        (group      (qnew "QState"
                          "objectName" "group"))
        (anim-group (qnew "QParallelAnimationGroup"))
        (layout     (qnew "QHBoxLayout(QWidget*)" *main*)))
    (qset-color *main* |QPalette.Window| *background*)
    (|setBackgroundBrush| scene (qnew "QBrush(QColor)" *background*))
    (x:do-with layout
      (|addStretch|)
      (|addWidget| *view*)
      (|addStretch|))
    (|setScene| *view* scene)
    (dolist (item (items))
      (|addItem| scene item))
    (let ((pause 0))
      (dolist (item (items))
        (add-property-animation anim-group item "geometry" *easing-curve* *duration* (incf pause *pause*))))
    (|setInterval| *timer* (/ *duration* 2))
    (let ((states (create-geometry-states group))
          (state-switcher (new-state-switcher machine "stateSwitcher")))
      (dolist (state states)
        (add-state state-switcher state anim-group))
      (x:do-with group
        (|setInitialState| (first states))
        (|addTransition| *timer* (qsignal "timeout()") state-switcher)))
    (x:do-with machine
      (|addState| group)
      (|setInitialState| group)
      (|start|))
    (qconnect group "entered()" *timer* "start()")
    (qoverride *view* "resizeEvent(QResizeEvent*)"
               (lambda (event)
                 (|fitInView| *view* (|sceneRect| scene))
                 (qcall-default)))
    ;; change background color on mouse move events outside of view
    (qoverride *main* "mouseMoveEvent(QMouseEvent*)"
               (lambda (event)
                 (qlet ((brush "QBrush(QColor)" (if (< (|x| event)
                                                       (/ (|width| *main*) 2))
                                                    *background*
                                                    *color-m*)))
                   (|setBackgroundBrush| scene brush))))
    ;; change background color on mouse move events inside of view
    (qoverride *view* "mouseMoveEvent(QMouseEvent*)"
               (lambda (event)
                 (qlet ((brush "QBrush(QColor)"
                               (|fromHsv.QColor|
                                  (floor (* 359 (/ (|x| event) (|width| *view*))))
                                  (floor (* 255 (/ (|y| event) (|height| *view*))))
                                  255)))
                   (|setBackgroundBrush| scene brush))))
    ;; quit on mouse click
    (dolist (w (list *main* *view*))
      (qoverride w "mousePressEvent(QMouseEvent*)" (lambda (event) (qquit))))
    ;; pause on key Space
    ;; save screenshot on key S
    ;; quit on key Escape
    (qadd-event-filter nil |QEvent.KeyPress|
                       (lambda (_ event)
                         (let ((key (|key| event)))
                           (case key
                             (#.|Qt.Key_Space|
                                (let ((active (|isActive| *timer*)))
                                  (if active
                                      (|stop| *timer*)
                                      (x:do-with *timer*
                                        (|timeout|)
                                        (|start|)))
                                  (qset-color *main* |QPalette.Window| (if active *color-pause* *background*))))
                             (#.|Qt.Key_S|
                                (let ((widget (|viewport| *view*)))
                                  (|save| (|grab| widget (|rect| widget))
                                          "screenshot.png")))
                             (#.|Qt.Key_Escape|
                                (qquit))))))
    (if *window-width*
        (|setFixedSize| *view* (list *window-width* *window-width*))
        (|setFixedWidth| *view* (apply 'min (nthcdr 2 (|screenGeometry| (|desktop.QApplication|))))))
    (qlater (lambda () (|setPos.QCursor| (|pos| *main*))))
    (if *window-width*
        (|show| *main*)
        (|showFullScreen| *main*))
    (|raise| *main*)))

;;;
;;; for *generate-html/js-version* (command line option :html)
;;;

(defvar *positions-timer* (qnew "QTimer"))
(defvar *item-positions*  nil)

(defun normalize (x)
  (truncate (+ 0.5 (/ (* x *window-width*) 300))))

(defun save-item-pixmap (text color id)
  (qlet ((pixmap "QPixmap(QSize)" (mapcar 'normalize *item-size*)))
    (|fill| pixmap "transparent")
    (qlet ((painter "QPainter(QPixmap*)" pixmap)
           (font* (qcopy *font*)))
      (|setPointSize| font* (normalize (|pointSize| font*)))
      (x:do-with painter
        (|fillRect| (mapcar '+ (|rect| pixmap) '(1 1 -2 -2)) color)
        (|setFont| font*)
        (|setPen| "black")
        (|drawText| (|rect| pixmap) |Qt.AlignCenter| text)))
    (|save| pixmap (ensure-directories-exist (format nil "html/img/~D.png"
                                                     (1+ (- (char-code (char (symbol-name id) 0))
                                                            (char-code #\A))))))))

(let (ex-pos)
  (defun collect-item-positions ()
    (let ((pos (mapcar (lambda (it) (cons (car it) (mapcar 'normalize (|pos| (cdr it)))))
                       *graphics-items*)))
      (unless (equal pos ex-pos)
        (push pos *item-positions*)
        (setf ex-pos pos)))))

(let (num)
  (defun save-item-positions ()
    (if num
        (progn
          (let (pos)
            (dolist (p *item-positions*)
              (push (sort p 'string< :key 'first) pos))
            (with-open-file (s "meta/positions.js"
                               :direction :output :if-exists :append :if-does-not-exist :create)
              (format s "~%  var p~D = [" (incf num))
              (dolist (p pos)
                (dolist (xy p)
                  (format s "~D,~D," (second xy) (third xy))))
              (format s "null];")))
          (format t "~%[html] positions ~D/12" num)
          (when (= 12 num)
            (load "meta/generate.lisp")
            (funcall (find-symbol "GENERATE-HTML") (item-count)
                     :width *window-width*
                     :pause 1500
                     :delay 50
                     :background "black")
            (format t "~%[html] please see \"html/palindrome.htm\"~%~%")
            (qq))
          (setf *item-positions* nil))
        (progn
          (setf num 0)
          (when (probe-file "meta/positions.js")
            (delete-file "meta/positions.js"))))))

(defun ini-generate-html/js ()
  (|setInterval| *positions-timer* 50)
  (qconnect *positions-timer* "timeout()" 'collect-item-positions)
  (qconnect *timer* "timeout()" 'save-item-positions)
  (|start| *positions-timer*))

(progn
  (ini)
  (when *generate-html/js-version*
    (ini-generate-html/js)))

