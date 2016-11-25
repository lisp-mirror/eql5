;; to be loaded in code with a defined *web-view* (QWebView)

(in-package :h-utils)

(let (web-inspector)
  (defun inspector ()
    "Web element inspector, JavaScript debugger and console."
    (unless web-inspector
      (setf web-inspector (qnew "QWebInspector"))
      (let ((settings (! "settings" *web-view*)))
        (! "setAttribute" settings |QWebSettings.DeveloperExtrasEnabled| t))
      (! "setPage" web-inspector (! "page" *web-view*)))
    (! "show" web-inspector)))
