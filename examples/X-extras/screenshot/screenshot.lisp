;;; Screenshot with countdown

(in-package :eql-user)

(defvar *pixmap* (qnew "QPixmap(QString)" (in-home "examples/X-extras/screenshot/camera.png")))

(defvar *splash* (qnew "QSplashScreen(QPixmap,Qt::WindowFlags)" *pixmap* |Qt.WindowStaysOnTopHint|
                       "font" (x:let-it (|font.QApplication|)
                                (|setPointSize| x:it (+ 12 (|pointSize| x:it)))
                                (|setBold| x:it t))
                       "windowOpacity" 8/10))

(defun countdown (seconds)
  (cond ((minusp seconds)
         ;; screenshot
         (|save| (|grabWindow| (|primaryScreen.QGuiApplication|) 0)
                 "screenshot.png")
         (qquit))
        ((zerop seconds)
         (|hide| *splash*)))
  (|showMessage| *splash* (princ-to-string seconds) |Qt.AlignCenter| "white")
  (qsingle-shot 1000 (lambda () (countdown (1- seconds)))))

(progn
  (|setMask| *splash* (|mask| *pixmap*)) ; transparent pixels
  (|show| *splash*)
  (countdown 9))
