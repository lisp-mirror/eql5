(mapcar (lambda (x)
          (if (atom x)
              (cons (symbol-name x) 2) ; default: 2 spaces
              (cons (symbol-name (car x)) (cdr x))))
        '(case
          ccase
          ecase
          typecase
          ctypecase
          etypecase
          handler-bind
          handler-case
          catch
          defun
          defmacro
          destructuring-bind
          do
          do*
          dolist
          dotimes
          do-all-symbols
          do-symbols
          do-with
          flet
          labels
          lambda
          let
          let*
          let-it
          loop
          multiple-value-bind
          qlet
          unless
          when
          with-open-file
          with-output-to-string
          ;; package :x
          do-string
          when-it
          when-it*
          while
          while-it))
