;;; This is a (slightely extended) port of the Qt example "moveblocks".
;;; Depends on plugin in "cpp/", needed for custom easing curve function.
;;;
;;; Exploring the features is left as an exercise...
;;;
;;; N.B: If you load this file in Slime, you need to use QLOAD instead of LOAD!

(in-package :eql-user)

(setf *break-on-errors* t)

;;;
;;; cpp plugin
;;;

(defvar *c++*                 (qload-c++ (in-src "examples/X-extras/move-blocks/cpp/easing_curve")))
(defvar *custom-easing-curve* (! "easingCurve" (:qt *c++*)))

(let ((sub 0)
      (div 1)
      function)
  (defun custom-easing-function (progress)
    (let ((y (ignore-errors
               (eval (subst progress 'x function)))))
      (if y
          (/ (- y sub) div)
          progress)))
  (defun easing-function-edited ()
    (labels ((call (x)
               (ignore-errors (eval (subst x 'x function))))
             (normalize ()
               (setf sub (or (call 0)         0)
                     div (or (- (call 1) sub) 1))
               (when (zerop div)
                 (setf div 1))))
      (let* ((fun (ignore-errors
                    (read-from-string (format nil "(progn ~A)" (|toPlainText| *custom*)))))
             (y   (ignore-errors
                    (eval (subst 1 'x fun)))))
        (when (numberp y)
          (setf function fun)
          (normalize)
          (update-graph-pixmap *custom-easing-curve*))
        (qset-color *custom* |QPalette.Base| (if y "white" "peachpuff"))))))

;;;
;;; user interface
;;;

(defvar *main* (qload-ui (in-src "examples/X-extras/move-blocks/move-blocks.ui")))

(defvar-ui *main*
  *custom*
  *duration*
  *easing-curve*
  *graph*
  *items*
  *pause*
  *view*)

(defun easing-curve-names ()
  (let ((custom "Custom"))
    (cons custom (sort (remove custom (mapcar 'car (cdadr (qenums "QEasingCurve" "Type"))) :test 'string=)
                       'string<))))

(defun ini-ui ()
  ;; easing curve
  (x:do-with *easing-curve*
    (|setToolTip| "Change easing curve of selected items")
    (|addItems| (easing-curve-names)))
  (|setCurrentIndex| *easing-curve* (|findText| *easing-curve* "InElastic"))
  (qconnect *easing-curve* "activated(QString)" 'change-easing-curve)
  ;; custom easing curve function
  (x:do-with *custom*
    (|setFont| (qnew "QFont(QString,int)"
                     #+darwin  "Monaco"      #+darwin  12
                     #+linux   "Monospace"   #+linux   9
                     #+windows "Courier New" #+windows 10))
    (|setPlainText| (format nil ";; \"Custom\" easing function~
                               ~%~
                               ~%(defun ease (s)~
                               ~%  (- (* (expt x 3) (1+ s))~
                               ~%     (* (expt x 2) s)))~
                               ~%~
                               ~%(ease (- (* 15 x) 7))")))
  (qconnect *custom* "textChanged()" 'easing-function-edited)
  (easing-function-edited)
  ;; items
  (x:do-with *items*
    (|setColumnCount| 2)
    (|setRootIsDecorated| nil)
    (|setSelectionMode| |QAbstractItemView.ExtendedSelection|))
  (|hide| (|header| *items*))
  (|setStretchLastSection| (|header| *items*) t)
  (qlater (lambda () (|resizeColumnToContents| *items* 0)))
  ;; graph
  (qlet ((curve "QEasingCurve(QEasingCurve::Type)" |QEasingCurve.OutElastic|))
    (update-graph-pixmap curve :ini))
  (qoverride *graph* "paintEvent(QPaintEvent*)" 'paint-graph)
  ;; duration
  (x:do-with (qset *duration*)
    ("minimum" 1)
    ("maximum" 4000)
    ("value"   1500))
  (qconnect *duration* "valueChanged(int)" 'change-duration) 
  ;; pause
  (x:do-with (qset *pause*)
    ("minimum" 1)
    ("maximum" 1000)
    ("value"   150))
  (qconnect *pause* "valueChanged(int)" 'change-pause)
  ;; sizes
  (|setMinimumSize| *view* '(250 250)) ; initial size, see below
  (|setMinimumWidth| *items* 200)
  (|setMinimumWidth| *custom* 250)
  (|resize| *main* '(0 0))
  (qlater (lambda ()
            (|show| *main*)
            (|setMinimumSize| *view* '(10 10)))))

(let ((n 0))
  (defun add-to-items (color)
    (let ((item (qnew "QTreeWidgetItem(QStringList)" (list (format nil "item ~D" (incf n))))))
      (|setIcon| item 0 (qnew "QIcon(QPixmap)"
                              (x:let-it (qnew "QPixmap(int,int)" 10 10)
                                (|fill| x:it color))))
      (|setText| item 1 (if (oddp n) "InElastic" "OutElastic")) ; initial values 
      (|addTopLevelItem| *items* item))))

;;; graph pixmap (easing curve)

(let* ((steps 70)
       (bx 5)
       (by 30)
       (progress bx)
       pixmap)
  (defun update-graph-pixmap (curve &optional ini)
    (when pixmap
      (qdel pixmap))
    (setf pixmap (qnew "QPixmap(int,int)" (+ (* 2 bx) steps) (+ (* 2 by) steps)))
    (when ini
      (|setFixedSize| *graph* (|size| pixmap)))
    (qlet ((painter "QPainter(QPixmap*)" pixmap)
           (brush1  "QBrush(QColor)" "lightgray")
           (brush2  "QBrush(QColor)" "cornflowerblue")
           (pen1    "QPen(QBrush,qreal,Qt::PenStyle)" brush1 1 |Qt.DashLine|)
           (pen2    "QPen(QBrush,qreal)" brush2 2))
      (|fill| pixmap "lightyellow")
      (x:do-with painter
        (|setRenderHint| |QPainter.Antialiasing|)
        (|setPen| pen1)
        (|drawLine| (list bx by (+ bx steps) by))
        (|drawLine| (let ((y (+ steps by))) (list bx y (+ bx steps) y)))
        (|setPen| pen2))
      (let (p*)
        (dotimes (x (1+ steps))
          (let ((p (list (+ bx x) (- (+ by steps)
                                     (* steps (|valueForProgress| curve (/ x steps)))))))
            (|drawLine| painter (append (or p* p) p))
            (setf p* p))))))
  (defun paint-graph (event)
    (qlet ((p "QPainter(QWidget*)" *graph*))
      (|drawPixmap| p '(0 0) pixmap)
      (when progress
        (x:do-with p
          (|setPen| "red")
          (|drawLine| (list progress 0 progress (+ (* 2 by) steps)))))))
  (defun update-graph-progress (ms)
    (let ((max (|value| *duration*)))
      (setf progress (if (= max ms)
                         nil
                         (+ bx (* steps (/ ms max))))))
    (|update| *graph*)
    (qcall-default)))

;;;
;;; move blocks
;;;

(defconstant +state-switch-event+ (+ |QEvent.User| 256))

(defvar *timer* (qnew "QTimer"
                      "singleShot" t))

;;; state-switch-event

(let (event-rand)
  (defun new-state-switch-event (rand)
    (setf event-rand rand)
    (qnew "QEvent(QEvent::Type)" +state-switch-event+))
  (defun event-rand ()
    event-rand))

;;; state-switch-transition

(defstruct (state-switch-transition (:conc-name transition-))
  (q    (qnew "QAbstractTransition"))
  (rand 0))

(defmethod the-qt-object ((object state-switch-transition))
  (transition-q object))

(defun new-state-switch-transition (rand)
  (let ((trans (make-state-switch-transition :rand rand)))
    (qoverride trans "eventTest(QEvent*)"
               (lambda (event)
                 (and (= +state-switch-event+
                         (|type| event))
                      (= (transition-rand trans)
                         (event-rand)))))
    trans))

;;; state-switcher

(defstruct (state-switcher (:conc-name :switcher-))
  (q           nil)
  (state-count 0)
  (last-index  0))

(defmethod the-qt-object ((object state-switcher))
  (switcher-q object))

(defun new-state-switcher (machine name)
  (let ((switch (make-state-switcher :q (qnew "QState(QState*)" machine
                                              "objectName" name))))
    (qoverride switch "onEntry(QEvent*)"
               (lambda (event)
                 (let (n)
                   (x:while (= (setf n (1+ (random (switcher-state-count switch))))
                               (switcher-last-index switch)))
                   (setf (switcher-last-index switch) n)
                   (|postEvent| (|machine| switch)
                                (new-state-switch-event n)))))
    switch))

;;; main

(defun new-graphics-rect-widget (color)
  (let ((grect (qnew "QGraphicsWidget")))
    (qoverride grect "paint(QPainter*,QStyleOptionGraphicsItem*,QWidget*)"
               (lambda (painter s w)
                 (|fillRect| painter (|rect| grect) color)))
    (add-to-items color) ; see *items*
    grect))

(defun create-geometry-state (parent objects rects)
  (let ((result (qnew "QState(QState*)" parent)))
    (mapc (lambda (object rect)
            (|assignProperty| result object "geometry" (qnew "QVariant(QRect)" rect)))
          objects rects)
    result))

(defun add-state (state-switcher state animation)
  (let ((trans (new-state-switch-transition (incf (switcher-state-count state-switcher)))))
    (x:do-with trans
      (|setTargetState| state)
      (|addAnimation| animation))
    (|addTransition| state-switcher trans)))

(defmacro push* (item list)
  `(setf ,list (nconc ,list (list ,item))))

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
        (|setEasingCurve| (qnew "QEasingCurve(QEasingCurve::Type)" curve-type)))
      (push* anim animations)
      (|addAnimation| group anim)
      anim))
  (defun change-easing-curve (name)
    (let ((type (symbol-value (intern (x:cc "QEasingCurve." name)))))
      (dotimes (i (|topLevelItemCount| *items*))
        (let ((item (|topLevelItem| *items* i))
              (curve (if (string= "Custom" name)
                     *custom-easing-curve*
                     (qnew "QEasingCurve(QEasingCurve::Type)" type))))
          (when (|isSelected| item)
            (|setText| item 1 name)
            (|setEasingCurve| (nth i animations) curve))
          (update-graph-pixmap curve)))))
  (defun change-duration (msec)
    (dolist (anim animations)
      (|setDuration| anim msec))
    (update-timer))
  (defun change-pause (msec)
    (let ((n 0))
      (dolist (group groups)
        (let ((anim (|takeAnimation| group 1)))
          (x:do-with group
            (|clear|)
            (|addPause| (* (incf n) msec))
            (|addAnimation| anim)))))
    (update-timer))
  (defun update-timer ()
    (|setInterval| *timer* (+ (|value| *duration*)
                              (* 4 (|value| *pause*))
                              500))))

(defun ini ()
  (let* ((item1 (new-graphics-rect-widget "tomato"))
         (item2 (new-graphics-rect-widget "lightgreen"))
         (item3 (new-graphics-rect-widget "lightblue"))
         (item4 (new-graphics-rect-widget "lightyellow"))
         (items (list item1 item2 item3 item4))
         (scene      (qnew "QGraphicsScene"
                           "sceneRect" '(0 0 300 300)))
         (machine    (qnew "QStateMachine"))
         (group      (qnew "QState"
                           "objectName" "group"))
         (anim-group (qnew "QParallelAnimationGroup")))         
    (|setScene| *view* scene)
    (|setZValue| item2 1)
    (|setZValue| item3 2)
    (|setZValue| item4 3)
    (x:do-with scene
      (|setBackgroundBrush| (qnew "QBrush(QColor)" "darkslategray"))
      (|addItem| item1)
      (|addItem| item2)
      (|addItem| item3)
      (|addItem| item4))
    (x:do-with *view*
      (|setAlignment| (logior |Qt.AlignLeft| |Qt.AlignTop|))
      (|setHorizontalScrollBarPolicy| |Qt.ScrollBarAlwaysOff|)
      (|setVerticalScrollBarPolicy|   |Qt.ScrollBarAlwaysOff|))
    (let ((state1 (create-geometry-state group items
                                         '((100 0 50 50)
                                           (150 0 50 50)
                                           (200 0 50 50)
                                           (250 0 50 50))))
          (state2 (create-geometry-state group items
                                         '((250 100 50 50)
                                           (250 150 50 50)
                                           (250 200 50 50)
                                           (250 250 50 50))))
          (state3 (create-geometry-state group items
                                         '((150 250 50 50)
                                           (100 250 50 50)
                                           (50  250 50 50)
                                           (0   250 50 50))))
          (state4 (create-geometry-state group items
                                         '((0 150 50 50)
                                           (0 100 50 50)
                                           (0 50  50 50)
                                           (0 0   50 50))))
          (state5 (create-geometry-state group items
                                         '((100 100 50 50)
                                           (150 100 50 50)
                                           (100 150 50 50)
                                           (150 150 50 50))))
          (state6 (create-geometry-state group items
                                         '((50  50  50 50)
                                           (200 50  50 50)
                                           (50  200 50 50)
                                           (200 200 50 50))))
          (state7 (create-geometry-state group items
                                         '((0   0   50 50)
                                           (250 0   50 50)
                                           (0   250 50 50)
                                           (250 250 50 50))))
          (state-switcher (new-state-switcher machine "stateSwitcher")))
      (let ((anim (add-property-animation anim-group item1 "geometry" |QEasingCurve.OutElastic| 1500)))
        (qoverride anim "updateCurrentTime(int)" 'update-graph-progress))
      (add-property-animation anim-group item2 "geometry" |QEasingCurve.InElastic|  1500 150)
      (add-property-animation anim-group item3 "geometry" |QEasingCurve.OutElastic| 1500 225)
      (add-property-animation anim-group item4 "geometry" |QEasingCurve.InElastic|  1500 300)
      (|setInterval| *timer* 2500) 
      (dolist (state (list state1 state2 state3 state4 state5 state6 state7))
        (add-state state-switcher state anim-group))
      (x:do-with group
        (|setInitialState| state1)
        (|addTransition| *timer* (qsignal "timeout()") state-switcher)))
    (x:do-with machine
      (|addState| group)
      (|setInitialState| group)
      (|start|))
    (qconnect group "entered()" *timer* "start()")
    (qoverride *view* "resizeEvent(QResizeEvent*)"
               (lambda (event)
                 (|fitInView| *view* (|sceneRect| scene))
                 (qcall-default)))))

(progn
  (ini-ui)
  (ini))
