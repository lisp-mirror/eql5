;;;
;;; Contributed by Mark Cox, please see LICENSE-MAKE-QIMAGE.txt
;;;

(in-package :eql)

;; MAKE-QIMAGE
;;
;; The following function is defined in ecl_fun.cpp
;; (defun %make-qimage/dangerous (vector width height bytes-per-line format))

(defun make-qimage/bits (vector width height format)
  "Create a new QImage object using the VECTOR of bits. The new image
has dimensions WIDTH by HEIGHT. Format can be one of
|QImage.Format_Mono| or |QImage.Format_MonoLSB|."
  (declare (type (member #.|QImage.Format_Mono| #.|QImage.Format_MonoLSB|) format)
           (type (integer 0) width height)
           (type (vector bit) vector))  
  (assert (>= (length vector) (* width height)))
  ;; Bit vectors are tricky. MAKE-QIMAGE/DANGEROUS copies the data
  ;; from the Lisp array to the QImage object. Copying non 8 bit
  ;; blocks is a pain, so we check to see if 8 is a factor of width.
  ;; If not, create a new vector such that each row begins in a fresh
  ;; byte.
  (cond
    ((zerop (mod width 8))     
     (%make-qimage/dangerous vector width height (/ width 8) format))
    (t
     (let* ((ba-bytes-per-line (ceiling width 8))
            (ba-width          (* 8 ba-bytes-per-line))
            (ba-vector         (make-array (list height ba-width) :element-type 'bit :initial-element 0))
            (pos 0))       
       (dotimes (i height)
         (dotimes (j width)
           (setf (aref ba-vector i j) (aref vector pos)
                 pos (1+ pos))))
       (%make-qimage/dangerous (make-array (array-total-size ba-vector) :element-type 'bit :displaced-to ba-vector)
                              width height ba-bytes-per-line format)))))

(defun make-qimage/bytes (vector width height format)
  "Create a new QImage object using VECTOR. The new image has
dimensions WIDTH by HEIGHT. Format can be any valid QImage format
value except |QImage.Format_Mono| and |QImage.Format_MonoLSB|.

The element type of VECTOR must be one of (UNSIGNED-BYTE
8), (UNSIGNED-BYTE 16) or (UNSIGNED-BYTE 32). Vectors with an element
type of (UNSIGNED-BYTE 16) or (UNSIGNED-BYTE 32) can only be used with
16 and 32 bit pixel FORMATs respectively."
  (declare (type (and fixnum (integer 0)) width height format)
           (type vector vector))
  
  (labels ((deduce-bits-per-pixel ()
             (ecase format
               (#.|QImage.Format_Invalid|                 0)
               (#.|QImage.Format_Indexed8|                8)
               (#.|QImage.Format_RGB32|                  32)
               (#.|QImage.Format_ARGB32|                 32)
               (#.|QImage.Format_ARGB32_Premultiplied|   32)
               (#.|QImage.Format_RGB16|                  16)
               (#.|QImage.Format_ARGB8565_Premultiplied| 24)
               (#.|QImage.Format_RGB666|                 24)
               (#.|QImage.Format_ARGB6666_Premultiplied| 24)
               (#.|QImage.Format_RGB555|                 16)
               (#.|QImage.Format_ARGB8555_Premultiplied| 24)
               (#.|QImage.Format_RGB888|                 24)
               (#.|QImage.Format_RGB444|                 16)
               (#.|QImage.Format_ARGB4444_Premultiplied| 16)))
           (deduce-bytes-per-pixel ()
             (let ((v (deduce-bits-per-pixel)))
               (assert (zerop (mod v 8)))
               (/ v 8))))
    
    (let* ((bytes-per-pixel (deduce-bytes-per-pixel))
           (bytes-per-line  (* width bytes-per-pixel)))
      (cond
        ((subtypep (array-element-type vector) '(unsigned-byte 8))
         (assert (= (length vector) (* height bytes-per-line))))
        ((subtypep (array-element-type vector) '(unsigned-byte 16))
         (assert (and (= (length vector) (* height width))
                      (= 2 bytes-per-pixel))))
        ((subtypep (array-element-type vector) '(unsigned-byte 32))
         (assert (and (= (length vector) (* height width))
                      (= 4 bytes-per-pixel))))
        (t
         (error "MAKE-QIMAGE/BYTES cannot process vectors with an element type of ~A." (array-element-type vector))))
      (%make-qimage/dangerous vector width height bytes-per-line format))))

(defun make-qimage/worker (array format &key width height)
  "The function MAKE-QIMAGE/WORKER dispatches to either
MAKE-QIMAGE/BITS or MAKE-QIMAGE/BYTES depending on the value of
FORMAT. The value of ARRAY can have a rank of a 1, 2 or 3. If ARRAY is
a vector, then WIDTH and HEIGHT must be non NIL."
  (labels ((wrap-array ()
             (make-array (array-total-size array)
                         :element-type (array-element-type array)
                         :displaced-to array)))
    (ecase (array-rank array)
      (1
       (assert (and width height))
       (if (member format (list #.|QImage.Format_Mono| #.|QImage.Format_MonoLSB|))
           (make-qimage/bits array width height format)
           (make-qimage/bytes array width height format)))
      (2
       (destructuring-bind (height width) (array-dimensions array)
         (make-qimage/worker (wrap-array) format :width width :height height)))
      (3
       (destructuring-bind (height width components) (array-dimensions array)
         (declare (ignore components))
         (make-qimage/worker (wrap-array) format :width width :height height))))))

(defun qrgb (r g b &optional (a 255))
  ;; documentation adapted to EQL (see "doc/auto-doc.lisp")
  "args: (red green blue &optional (alpha 255))
   Constructs a <code>(unsigned-byte 32)</code> value that represents a 32 bit pixel color specified by the red, green, blue and alpha values."
  (declare (type (unsigned-byte 8) r g b a))
  (let ((rv 0))
    (setf (ldb (byte 8 24) rv) a
          (ldb (byte 8 16) rv) r
          (ldb (byte 8  8) rv) g
          (ldb (byte 8  0) rv) b)
    rv))

(defvar *default-color-table-mono* nil
  "The default color table to be used by MAKE-QIMAGE when FORMAT is
  either |QImage.Format_Mono| or |QImage.Format_MonoLSB|.")

(defvar *default-color-table-indexed8* nil
  "The default color table to be used by MAKE-QIMAGE when FORMAT is
  |QImage.Format_Indexed8|.")

(defun default-color-table/mono ()
  "Obtain the default color table for mono images."
  (or *default-color-table-mono*
      (setf *default-color-table-mono* (make-array 2 :initial-contents (list (qrgb 0 0 0) (qrgb 255 255 255))))))

(defun default-color-table/indexed8 ()
  "Obtain the default color table for indexed 8 images."
  (or *default-color-table-indexed8*
      (setf *default-color-table-indexed8* (let ((v (make-array 256)))
                                             (dotimes (i 256)
                                               (setf (aref v i) (qrgb i i i)))
                                             v))))

(defun make-qimage (array format &key width height color-table)
  "Construct a new QImage instance with FORMAT using the data contained in ARRAY.

The rank of ARRAY can be one of 1, 2 or 3. ARRAY can have an element
type of BIT, (UNSIGNED-BYTE 8), (UNSIGNED-BYTE 16) or (UNSIGNED-BYTE
32). Valid choices for element type are conditioned on the value for
FORMAT.

If ARRAY is a vector, then WIDTH and HEIGHT must be set.

The argument COLOR-TABLE can be used for |QImage.Format_Mono|,
|QImage.Format_MonoLSB| or |QImage.Format_Indexed8| formatted
images. If COLOR-TABLE is NIL then the color table is selected from
*DEFAULT-COLOR-TABLE-MONO* or *DEFAULT-COLOR-TABLE-INDEXED8* based on
the FORMAT argument."
  (declare (type (or null vector) color-table))
  (let ((rv (make-qimage/worker array format :width width :height height)))
    (case format
      ((#.|QImage.Format_Mono| #.|QImage.Format_MonoLSB|)
       (! "setColorTable" rv (if color-table
                                 color-table
                                 (default-color-table/mono))))
      (#.|QImage.Format_Indexed8|
         (! "setColorTable" rv (if color-table
                                   color-table
                                   (default-color-table/indexed8)))))
    rv))

