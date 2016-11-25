;;;
;;; Contributed by Mark Cox, please see LICENSE-MAKE-QIMAGE.txt
;;;

#-qt-wrapper-functions ; see README-OPTIONAL.txt
(load (in-home "src/lisp/all-wrappers"))

(defpackage "MAKE-QIMAGE-EXAMPLE"
  (:use "COMMON-LISP"
        "EQL")
  (:documentation
   "The MAKE-QIMAGE-EXAMPLE package tests the EQL:MAKE-QIMAGE function.

The example creates many QImage objects with varying QImage::Format
specifications. The data used by the QImage object is obtained from a
Lisp created array."))

(in-package "MAKE-QIMAGE-EXAMPLE")

;; The qimage test database

(defclass qimage-test ()
  ((name
    :initarg :name
    :reader test-name)
   (short-description
    :initarg :short-description
    :reader test-short-description)
   (long-description
    :initarg :long-description
    :reader test-long-description)
   (function
    :initarg :function
    :reader test-function))
  (:documentation "An instance of the QIMAGE-TEST class encapsulates
  the information needed to conduct a MAKE-QIMAGE test."))

(defvar *qimage-tests* nil
  "The database of qimage-test objects.")

(defun remove-all-qimage-tests ()
  "Remove all tests from the database."
  (setf *qimage-tests* nil))

(defun map-qimage-tests (function)
  "Invoke FUNCTION once for each QIMAGE-TEST instance in the
database."
  (map nil #'(lambda (item)
               (funcall function (cdr item)))
           *qimage-tests*))

(defun qimage-test (name)
  "Return the QIMAGE-TEST instance with the given test NAME, or NIL if
an instance cannot be found."
  (declare (type symbol name))
  (let ((v (assoc name *qimage-tests*)))
    (when v
      (cdr v))))

(defun (setf qimage-test) (value name)
  "Store a QIMAGE-TEST instance with in the test database."
  (declare (type qimage-test value)
           (type symbol name))
  (assert (eql (test-name value) name))
  (let ((v (assoc name *qimage-tests*)))
    (cond
      (v
       (setf (cdr v) value))
      (t
       (push (cons name value) *qimage-tests*)
       value))))

(defun ensure-qimage-test (name &key short-description long-description function)
  "Create and add a new QIMAGE-TEST object to the test database."
  (setf (qimage-test name) (make-instance 'qimage-test
                                          :name name
                                          :short-description short-description
                                          :long-description long-description
                                          :function function)))

(defmacro define-qimage-test (name-expression long-description &body body)
  "A more convenient syntax for ENSURE-QIMAGE-TEST."
  (destructuring-bind (symbol-name short-description) name-expression
    `(ensure-qimage-test ',symbol-name
                         :short-description ,short-description
                         :long-description ,long-description
                         :function (lambda ()
                                     ,@body))))

;; Define the QImage tests.

(defun make-checkerboard (&key (board-length 8) (block-length 8))
  "Create an array with element type BIT initialised with a
checkerboard pattern.

The value of BOARD-LENGTH refers to the number of blocks along one
side of the checkerboard. The value of BLOCK-LENGTH represents the
side length of a block in pixels."
  (let* ((width  (* board-length block-length))
         (height (* board-length block-length))
         (board  (make-array (list height width) :element-type 'bit :initial-element 0)))
    (labels ((colour-square (row column)
               (loop :for i :from (* row block-length) :below (* (1+ row) block-length) :do
                 (loop :for j :from (* column block-length) :below (* (1+ column) block-length) :do
                    (setf (aref board i j) 1))))
             (colour-column-if (row predicate)
               (dotimes (column board-length)
                 (when (funcall predicate column)
                   (colour-square row column)))))
      (dotimes (row board-length)
        (colour-column-if row (if (evenp row) #'evenp #'oddp)))
      board)))

(defun make-color-table-from-colors (&rest colors)
  "Create a new color table from the list of COLORS. Each color in
COLORS must be a (UNSIGNED-BYTE 32) value."
  (assert (every #'(lambda (item)
                     (typep item '(unsigned-byte 32)))
                 colors))
  (make-array (list (length colors)) :initial-contents colors))

(defun indexed8-color-table/redscale ()
  "Creates a color table where 8 bit integers refer to different
shades of red."
  (let ((rv (make-array 256)))
    (dotimes (i (length rv))
      (setf (aref rv i) (qrgb i 0 0)))
    rv))

(defun indexed8-color-table/bluescale ()
  "Creates a color table where 8 bit integers refer to different
shades of blue."
  (let ((rv (make-array 256)))
    (dotimes (i (length rv))
      (setf (aref rv i) (qrgb 0 0 i)))
    rv))

(defun make-gradient-image (width height)
  "Create an indexed8 gradient image. The color values are determined
  by the pixel coordinate's distance to the center of the image. The
  furthest point has the value 0 and the center point has the value
  255."
  (assert (and (evenp width)
               (evenp height)))
  (let* ((center-x (/ width 2))
         (center-y (/ height 2))
         (maximum-distance (sqrt (+ (* center-x center-x)
                                    (* center-y center-y))))
         (rv (make-array (list height width) :element-type '(unsigned-byte 8))))
    (labels ((distance-to-center (x y)
               (let ((dx (- x center-x))
                     (dy (- y center-y)))
                 (sqrt (+ (* dx dx) (* dy dy)))))
             (determine-color (x y)
               (let ((v (round (* 255 (- 1 (/ (distance-to-center x y)
                                              maximum-distance))))))
                 (min (max 0 v) 255))))
      (dotimes (i height)
        (dotimes (j width)
          (setf (aref rv i j) (determine-color j i))))
      rv)))

(define-qimage-test (mono/default-color-table "Mono (default color table)")
  "A checkerboard image created using a two dimensional array with element type BIT.

The board is a 5 by 5 grid with each square containing 7 by 7
pixels. The top left square should be white and the alternating color
should be black."
  (make-qimage (make-checkerboard :board-length 5 :block-length 7)
               |QImage.Format_Mono|))

(define-qimage-test (mono/color-table "Mono (custom color table)")
  "An checkerboard image created using a two dimensional array with element type BIT.

The board is a 8 by 8 grid with each square containing of 5 by 5
pixels. The top left square should be green and the alternating color
should be red."
  (make-qimage (make-checkerboard :board-length 8 :block-length 5)
               |QImage.Format_Mono|
               :color-table (make-color-table-from-colors (qrgb 255 0 0) (qrgb 0 255 0))))

(define-qimage-test (indexed8/default-color-table "Indexed8 (default color table)")
  "A 100 by 100 gradient image created from a two dimensional array with element type (UNSIGNED-BYTE 8).

The color table used produces an image that is white in the center and
black in the corners."
  (make-qimage (make-gradient-image 100 100)
               |QImage.Format_Indexed8|))

(define-qimage-test (indexed8/redscale-color-table "Indexed8 (redscale color table)")
  "A 100 by 100 gradient image created from a two dimensional array with element type (UNSIGNED-BYTE 8).

The color table used produces an image that is red in the center and
black in the corners."
  (make-qimage (make-gradient-image 100 100)
               |QImage.Format_Indexed8|
               :color-table (indexed8-color-table/redscale)))

(define-qimage-test (rgb444 "RGB444")
  "A 100 by 100 gradient image created from a two dimensional array with element type (UNSIGNED-BYTE 16). The QImage format is RGB444 (0x0RGB).

The image contains the colors black, green, red and yellow in the top
left, bottom right, top right and bottom right corners
respectively. All other colors are interpolated."
  (labels ((qrgb444 (r g b)
             (declare (type (integer 0 15) r g b))
             (let ((v 0))
               (setf (ldb (byte 4 8) v) r
                     (ldb (byte 4 4) v) g
                     (ldb (byte 4 0) v) b)
               v)))
    (let ((data (make-array (list 100 100) :element-type '(unsigned-byte 16))))
      (destructuring-bind (height width) (array-dimensions data)
        (dotimes (i height)
          (let ((green (round (* 15 (/ i height)))))
            (dotimes (j width)
              (let ((red (round (* 15 (/ j width)))))
                (setf (aref data i j) (qrgb444 red green 0)))))))
      (make-qimage data |QImage.Format_RGB444|))))

(define-qimage-test (rgb32 "RGB32")
  "A 100 by 100 gradient image created from a two dimensional array with element type (UNSIGNED-BYTE 32). The QImage format is RGB32 (0x00RRGGBB).

The image contains the colors black, green, blue and cyan in the top
left, bottom right, top right and bottom right corners
respectively. All other colors are interpolated."
  (let ((data (make-array (list 100 100) :element-type '(unsigned-byte 32))))
    (destructuring-bind (height width) (array-dimensions data)
      (dotimes (i height)
        (let ((green (round (* 255 (/ i height)))))
          (dotimes (j width)
            (let ((blue (round (* 255 (/ j width)))))
              (setf (aref data i j) (qrgb 0 green blue)))))))
    (make-qimage data |QImage.Format_RGB32|)))

(define-qimage-test (rgb888 "RGB888 (3 dimensional lisp array)")
  "A 100 by 100 gradient image created using a three dimensional array with element type (UNSIGNED-BYTE 8). The QImage format is RGB888.

The image contains the colors black, red, blue and purple in the top
left, bottom right, top right and bottom right corners
respectively. All other colors are interpolated."
  (let ((data (make-array (list 100 100 3) :element-type '(unsigned-byte 8))))
    (let ((height (array-dimension data 0))
          (width  (array-dimension data 1)))
      (dotimes (i height)
        (let ((red (round (* 255 (/ i height)))))
          (dotimes (j width)
            (let ((blue (round (* 255 (/ j width)))))
              (setf (aref data i j 0) red
                    (aref data i j 1) 0
                    (aref data i j 2) blue))))))
    (make-qimage data |QImage.Format_RGB888|)))

;; the application protocol

(defgeneric resize (widget width height)
  (:documentation "Resize WIDGET to the specified WIDTH and HEIGHT."))

(defgeneric show (widget)
  (:documentation "Show the WIDGET."))

(defgeneric description (window)
  (:documentation "Return the description string displayed in WINDOW."))

(defgeneric (setf description) (new-value window)
  (:documentation "Change the description displayed in WINDOW."))

(defgeneric image (window)
  (:documentation "The image object currently displaed by WINDOW."))

(defgeneric (setf image) (new-value window)
  (:documentation "Change the image object displayed by WINDOW."))

(defgeneric add-item (window short-description on-selection)
  (:documentation "Add a selectable item to WINDOW. The item will be
  displayed to the user using SHORT-DESCRIPTION. The function
  ON-SELECTION is called when the item is selected by the user."))

(defgeneric test-selected (application-window index)
  (:documentation "This function is called by an instance of
APPLICATION-WINDOW when the user selects a test."))

(defun main ()
  (let ((window (make-instance 'application-window)))
    (map-qimage-tests #'(lambda (test)
                          (add-item window (test-short-description test)
                                    (lambda ()
                                      (setf (description window) (test-long-description test)
                                            (image window) (funcall (test-function test)))))))
    (test-selected window 0)
    (resize window 800 600)
    (show window)))

;; GUI stuff

;; - Double Slider

(defclass double-slider ()
  ((minimum-value
    :initarg :minimum-value
    :accessor minimum-value)
   (maximum-value
    :initarg :maximum-value
    :accessor maximum-value)
   (slider
    :reader widget)
   (value
    :initarg :value
    :accessor value)
   (on-value-change
    :initarg :on-value-change
    :accessor on-value-change))
  (:default-initargs
    :minimum-value 0.1
    :maximum-value 10
    :number-of-steps 1000
    :value 1
    :orientation |Qt.Horizontal|
    :on-value-change nil)
  (:documentation "A double version of the Qt QSlider class."))

(defun double-slider/from-int-value (double-slider int-value)
  "Convert the INT-VALUE to the double value used by the
DOUBLE-SLIDER."
  (with-slots (slider) double-slider
    (let* ((int-minimum (|minimum| slider))
           (int-maximum (|maximum| slider))
           (m  (/ (- (maximum-value double-slider)
                     (minimum-value double-slider))
                  (- int-maximum int-minimum)))
           (c  (- (maximum-value double-slider)
                  (* m int-maximum))))
      (+ (* m int-value) c))))

(defun double-slider/to-int-value (double-slider value)
  "Conver the double VALUE to an integer value that can be used by a
QSlider instance."
  (with-slots (slider) double-slider
    (let* ((y1 (|maximum| slider))
           (y2 (|minimum| slider))
           (x1 (maximum-value double-slider))
           (x2 (minimum-value double-slider))
           (m  (/ (- y1 y2) (- x1 x2)))
           (c  (- y1 (* m x1))))
      (round (+ (* m value) c)))))

(defmethod (setf value) :after (value (slider double-slider))
  "Change the value displayed by the QSlider instance."
  (|setValue| (widget slider) (double-slider/to-int-value slider value)))

(defmethod (setf value) :around (value (slider double-slider))
  "Call the ON-VALUE-CHANGE callback when the value of the
DOUBLE-SLIDER changes."
  (let ((value-before (value slider)))
    (call-next-method)
    (unless (= value-before (value slider))
      (let ((fn (on-value-change slider)))
        (when fn
          (funcall fn value))))))

(defmethod initialize-instance :after ((self double-slider) &key orientation number-of-steps)
  (setf (minimum-value self) (min (value self) (minimum-value self))
        (maximum-value self) (max (value self) (maximum-value self)))

  (with-slots (slider) self
    (setf slider (qnew "QSlider(Qt::Orientation,QWidget*)" orientation nil))
    (|setMinimum| slider 0)
    (|setMaximum| slider number-of-steps)
    (|setValue| slider 0)
    (qconnect slider "valueChanged(int)" (lambda (new-value)
                                           (setf (value self) (double-slider/from-int-value self new-value)))))

  (setf (value self) (value self)))

;; image viewer widget

(defclass image-viewer ()
  ((zoom
    :initarg :zoom
    :accessor zoom)
   (graphics-view
    :reader widget)
   (pixmap-item)
   (image
    :accessor image))
  (:default-initargs
   :zoom 1)
  (:documentation "A widget for displaying QImage objects."))

(defmethod (setf zoom) :around (new-value (self image-viewer))
  "Change the transform of the graphics-view if the zoom value
changes."
  (with-slots (graphics-view ) self
    (let ((current (zoom self)))
      (call-next-method)
      (unless (= current new-value)
        (|setTransform| graphics-view (|fromScale.QTransform| new-value new-value))))))

(defmethod (setf image) :after (new-value (self image-viewer))
  "Change the pixmap displayed by the PIXMAP-ITEM."
  (cond
    ((null new-value)
     (setf (image self) (qnew "QImage")))
    (t
     (with-slots (pixmap-item graphics-view) self
       (|setPixmap| pixmap-item (|fromImage.QPixmap| (image self)))
       (|setPos| pixmap-item
          (/ (|width| (image self)) -2)
          (/ (|height| (image self)) -2))
       (|centerOn| graphics-view 0 0)))))

(defmethod initialize-instance :after ((self image-viewer) &key)
  (with-slots (window graphics-view pixmap-item text-item zoom-slider) self
    (let ((graphics-scene (qnew "QGraphicsScene")))
      (setf graphics-view  (qnew "QGraphicsView"))
      (setf pixmap-item (qnew "QGraphicsPixmapItem"))
      (|addItem| graphics-scene pixmap-item)
      (|setScene| graphics-view graphics-scene))))

;; test list widget
(defclass qimage-test-list-view ()
  ((on-selection
    :initarg :on-selection
    :reader on-selection)
   (list-view
    :reader widget))
  (:documentation "The view used by the user to select the different
  QImage tests. The callback ON-SELECTION is invoked when a test is
  selected."))

(defgeneric model (view-object)
  (:documentation "Return the model object used by VIEW-OBJECT."))

(defgeneric (setf model) (value view-object)
  (:documentation "Change the model object used by VIEW-OBJECT."))

(defgeneric current-index (view-object)
  (:documentation "Return the current selected row in view."))

(defgeneric (setf current-index) (value view-object)
  (:documentation "Change the currently selected row in view."))

(defmethod initialize-instance :after ((self qimage-test-list-view) &key)
  (with-slots (list-view) self
    (setf list-view (qnew "QListView"))
    (|setEditTriggers| list-view |QAbstractItemView.NoEditTriggers|)
    (qconnect list-view "clicked(QModelIndex)" (lambda (index)
                                                 (when (on-selection self)
                                                   (funcall (on-selection self) (|row| index)))))))

(defmethod model ((view-object qimage-test-list-view))
  (|model| (widget view-object)))

(defmethod (setf model) (new-value (view-object qimage-test-list-view))
  (|setModel| (widget view-object) new-value))

(defmethod current-index ((view-object qimage-test-list-view))
  (|currentIndex| (widget view-object)))

(defmethod (setf current-index) (value (view-object qimage-test-list-view))
  (declare (type (integer 0) value))
  (let* ((model (|model| (widget view-object)))
         (model-index (|index| model value 0)))
    (|setCurrentIndex| (widget view-object) model-index)))

(defclass application-window ()
  ((widget
    :reader widget)
   (image-viewer)
   (zoom-slider)
   (test-list-view)
   (test-list-model)
   (description)
   (items
    :initform nil))
  (:documentation "The view used to display the image created by a QImage
  test."))

(defmethod image ((window application-window))
  (with-slots (image-viewer) window
    (image image-viewer)))

(defmethod (setf image) (new-value (window application-window))
  (with-slots (image-viewer) window
    (setf (image image-viewer) new-value)))

(defmethod (setf description) (new-value (window application-window))
  (with-slots (description) window
    (|setText| description new-value)))

(defmethod test-selected ((application-window application-window) index)  
  (with-slots (items test-list-view) application-window
    (setf (current-index test-list-view) index)
    (funcall (elt items index))))

(defmethod add-item ((window application-window) short-description on-selection)
  (with-slots (test-list-model items) window
    (|columnCount| test-list-model)
    (|insertRow| test-list-model (|rowCount| test-list-model))
    (|setData| test-list-model
               (|index| test-list-model (1- (|rowCount| test-list-model)) 0)
               (qnew "QVariant(QString)" short-description))
    (setf items (append items (cons on-selection nil)))))

(defmethod initialize-instance :after ((self application-window) &key)
  (with-slots (widget image-viewer zoom-slider test-list-view test-list-model description) self
    (setf widget (qnew "QWidget")
          image-viewer (make-instance 'image-viewer)
          zoom-slider (make-instance 'double-slider :on-value-change (lambda (new-zoom)
                                                                       (setf (zoom image-viewer) new-zoom)))
          test-list-view (make-instance 'qimage-test-list-view :on-selection (lambda (index)
                                                                               (test-selected self index)))
          test-list-model (qnew "QStringListModel")
          description (qnew "QLabel"))

    (|setWordWrap| description t)
    (|setMaximumWidth| description 250)
    (|setMinimumHeight| (widget test-list-view) 150)
    (|setMaximumHeight| (widget test-list-view) 150)
    (|setModel| (widget test-list-view) test-list-model)

    (let ((layout (qnew "QHBoxLayout")))
      (let ((v (qnew "QVBoxLayout")))
        (|addWidget| v (qnew "QLabel" "text" "QImage format"))
        (|addWidget| v (widget test-list-view))
        (|addWidget| v description)
        (|addStretch| v)
        (|addLayout| layout v 0))
      (let ((v (qnew "QVBoxLayout")))
        (|addWidget| v (widget image-viewer))
        (let ((h (qnew "QHBoxLayout")))
          (|addStretch| h)
          (|addWidget| h (Widget zoom-slider))
          (|addLayout| v h))
        (|addLayout| layout v 1))
      (|setLayout| widget layout))))

;; common method implementations

(defmethod resize (object width height)
  (|resize| (widget object) width height))

(defmethod show (object)
  (|show| (widget object)))

(main)

