(provide :settings)

(defvar eql::*code-font* (eql:qnew "QFont(QString,int)"
                                   #+darwin  "Monaco"      #+darwin  12
                                   #+linux   "Monospace"   #+linux   12
                                   #+windows "Courier New" #+windows 10))
