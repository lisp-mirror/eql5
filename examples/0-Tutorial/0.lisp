;; Lisp versus C++ (note reversed order)

(|currentTime.QTime|)                               ; QTime::currentTime()

(|toString| (|currentTime.QTime|))                  ; QTime::currentTime().toString()

(|toString| (|addSecs| (|currentTime.QTime|) 1000)) ; QTime::currentTime().addSecs(1000).toString()

