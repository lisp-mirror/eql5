This is a simple example of integrating an existing Qt/C++ application


BUILD / RUN / CALL
==================

qmake
make

eql run.lisp -qtpl

________________________________________

Option 1:

  (qfun+ *trafficlight* "stop")
  (qfun+ *trafficlight* "start")
________________________________________

Option 2:

  (! "stop"  (:qt *trafficlight*))
  (! "start" (:qt *trafficlight*))
________________________________________

Option 3:

  (define-qt-wrappers *trafficlight*)

  (start *trafficlight*)
  (stop *trafficlight*)
________________________________________
