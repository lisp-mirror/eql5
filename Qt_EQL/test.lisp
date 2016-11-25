(in-package :eql-user)

(defvar *lib* (qload-c++ (in-home "Qt_EQL/eql_cpp")))

(assert (qt-object-p *lib*))

(qapropos nil *lib*)

;; test call

(qlet ((a "QVariant(QString)"    "hello from C++")
       (b "QVariant(int)"        42)
       (c "QVariant(double)"     pi)
       (d "QVariant(QByteArray)" #(69 81 76)))
  (qmsg (! "hello" (:qt *lib*) (list a b c d)))) ; note :qt

(qq)
