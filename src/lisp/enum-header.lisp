;;; Complete list of all enumerations
;;;
;;;     run1:  ~/eql/helper/parse-enums.lisp
;;;     run2:  get-dynamic-enums.lisp
;;;     merge: merge-enums.lisp
;;;     split: split-enums
;;;
;;; (divided in more files to not exceed string size limit of Windows)

(in-package :eql)

(defmacro defenum (name value)
  `(progn
     (defconstant ,name ,value)
     (export ',name ,(find-package :eql))))

