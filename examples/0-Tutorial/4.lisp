;;; Ported Qt Widgets Tutorial - Nested Layouts

(in-package :eql-user)

(defun start ()
  (let ((window       (qnew "QWidget"
                            "windowTitle" "Nested layouts"))
        (query-label  (qnew "QLabel"
                            "text" "Query:"))
        (query-edit   (qnew "QLineEdit"))
        (result-view  (qnew "QTableView"))
        (query-layout (qnew "QHBoxLayout"))
        (main-layout  (qnew "QVBoxLayout")))
    (dolist (w (list query-label query-edit))
      (|addWidget| query-layout w))
    (|addLayout| main-layout query-layout)
    (|addWidget| main-layout result-view)
    (|setLayout| window main-layout)
    (setup-model-and-view result-view)
    (|show| window)))

(defun setup-model-and-view (view)
  (let ((model (qnew "QStandardItemModel")))
    (|setHorizontalHeaderLabels| model '("Name" "Office"))
    (dolist (row '(("Verne Nilsen" "123")
                   ("Carlos Tang" "77")
                   ("Bronwyn Hawcroft" "119")
                   ("Alessandro Hanssen" "32")
                   ("Andrew John Bakken" "54")
                   ("Vanessa Weatherley" "85")
                   ("Rebecca Dickens" "17")
                   ("David Bradley" "42")
                   ("Knut Walters" "25")
                   ("Andrea Jones" "34")))
      (|appendRow| model (loop :for text :in row
                               :collect (qnew "QStandardItem(QString)" text))))
    (|setModel| view model)
    (|hide| (|verticalHeader| view))
    (|setStretchLastSection| (|horizontalHeader| view) t)))

(start)
