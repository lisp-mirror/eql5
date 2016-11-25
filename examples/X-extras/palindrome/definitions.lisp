(provide :definitions)

(defparameter *duration*       3000)                     ; (change-duration 1000)
(defparameter *pause*          50)                       ; (change-pause 0)
(defparameter *easing-curve*   |QEasingCurve.InOutSine|) ; (change-easing-curve "OutBounce")

(defparameter *window-width*   nil)                      ; INTEGER command line argument
(defparameter *window-opacity* 10/10)                    ; FLOAT/RATIONAL command line argument

;;; colors

(defparameter *background*  "black")
(defparameter *color-1*     (|lighter| (qnew "QColor(QString)" "gray")   190))
(defparameter *color-2*     (|lighter| (qnew "QColor(QString)" "blue")   170))
(defparameter *color-3*     (|lighter| (qnew "QColor(QString)" "red")    170))
(defparameter *color-4*     (|lighter| (qnew "QColor(QString)" "yellow") 170))
(defparameter *color-pause* *color-2*)

(defparameter *items*
  (list (list "P" *color-2* '(g s))
        (list "A" *color-4* '(d j p v))
        (list "T" *color-3* '(c k o w))
        (list "E" *color-1* '(h l n r))
        (list "R" *color-2* '(a i q y))
        (list "N" *color-3* '(m))
        (list "O" *color-4* '(b f t x))
        (list "S" *color-2* '(e u))))

(defparameter *state-1*
  '("..............."
    "..............."
    "..............."
    "..............."
    "..............."
    ".....abcde....."
    ".....fghij....."
    ".....klmno....."
    ".....pqrst....."
    ".....uvwxy....."
    "..............."
    "..............."
    "..............."
    "..............."
    "..............."))

(defparameter *state-2*
  '(".......d......."
    "..............."
    ".......g......."
    ".......j......."
    ".......c......."
    ".......h......."
    ".......a......."
    "p.svklqmbeoni.t"
    ".......f......."
    ".......u......."
    ".......w......."
    ".......r......."
    ".......y......."
    "..............."
    ".......x......."))

(defun custom-easing-function (x) ; |QEasingCurve.Custom|
  (flet ((ease (s)
           (- (* (expt x 3) (1+ s))
              (* (expt x 2) s))))
    (ease (- (* 15 x) 7))))

(let (ex)
  (defun rotated (&optional (state ex))
    (let* ((width  (length (first state)))
           (height (length state))
           (array  (make-array (list width height))))
      (loop :for string :in state
            :for y :upfrom 0
            :do (loop :for ch :across string
                      :for x :upfrom 0
                      :do (setf (aref array x (- (1- width) y)) ; rotate
                                ch)))
      (setf ex (loop :for y :below height
                     :collect (coerce (loop :for x :below width
                                            :collect (aref array y x))
                                      'string)))))
  (defun ex-rotated ()
    ex))

(defparameter *states*
  (list *state-1*           ; 1
        *state-2*
        *state-1*
        (rotated *state-1*) ; 2
        *state-2*
        (ex-rotated)
        (rotated)           ; 3
        *state-2*
        (ex-rotated)
        (rotated)           ; 4
        *state-2*
        (ex-rotated)))
