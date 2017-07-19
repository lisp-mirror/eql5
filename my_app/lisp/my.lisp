(in-package :example)

(defun start ()
  (! "show" (qnew "QLabel"
                  "text" (tr (format nil "<h3>~{~R~^ ~},<br>I want to sleep until ~R"
                                     (loop for i from 1 to 7 collect i)
                                     11))
                  "alignment" |Qt.AlignCenter|
                  "margin" 10)))

(start)
