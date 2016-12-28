#-qt-wrapper-functions ; see README-OPTIONAL.txt
(load (in-home "src/lisp/all-wrappers"))

(in-package :eql-user)

(setf *break-on-errors* t)

(qrequire :sql)

(defvar *database*   (|addDatabase.QSqlDatabase| "QSQLITE"))
(defvar *table-view* (qnew "QTableView"
                           "windowTitle" "sqlite"))

(defun populate-db ()
  (x:do-with (|exec| *database*)
    "CREATE TABLE friends   ( id INT PRIMARY KEY, name    VARCHAR(50), country INT )"
    "CREATE TABLE countries ( id INT PRIMARY KEY, country VARCHAR(50) )")
  ;; dumb, just for this example; you normally want QSqlQuery
  (mapc (lambda (id name country)
          (|exec| *database*
             (format nil "INSERT INTO friends VALUES (~A, '~A', ~A)" id name country)))
        (list 1 2 3)
        (list "Pascal" "Valentina" "Rachel")
        (list 10 20 30))
  (mapc (lambda (id name)
          (|exec| *database*
             (format nil "INSERT INTO  countries VALUES (~A, '~A')" id name)))
        (list 10 20 30)
        (list "France" "Italia" "USA")))

(defun ini ()
  (|setDatabaseName| *database* ":memory:")
  (if (|open| *database*)
      (progn
        (populate-db)
        (let ((model (qnew "QSqlRelationalTableModel")))
          (x:do-with model
            (|setTable| "friends")
            (|setRelation| 2 (qnew "QSqlRelation(QString...)" "countries" "id" "country"))
            (|select|))
          (x:do-with *table-view*
            (|setModel| model)
            (|setItemDelegate| (qnew "QSqlRelationalDelegate"))
            (|resizeColumnsToContents|)
            (|show|))))
      (|critical.QMessageBox| nil "EQL" (tr "Could not open database."))))

(defun cell-string (row column)
  (|toString| (|data| (|index| (|model| *table-view*)
                               row column))))

(defun selected-cells ()
  (mapcar (lambda (index)
            (cons (|row| index)
                  (|column| index)))
          (|selectedIndexes| (|selectionModel| *table-view*))))

(ini)
