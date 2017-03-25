(progn
  (dotimes (i 12)
    (load (eql:in-home (format nil "src/lisp/all-wrappers-~D" (1+ i)))))
  (dotimes (i 2)
    (load (eql:in-home (format nil "src/lisp/all-wrappers-webengine-~D" (1+ i))))))
