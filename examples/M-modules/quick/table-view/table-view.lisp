;;; this is (kind of) a simplified port of the "tableview" C++/QML example
;;; (see also README.txt)

#-qt-wrapper-functions ; see README-OPTIONAL.txt
(load (in-home "src/lisp/all-wrappers"))

(qrequire :quick)

(require :qml-lisp   "qml-lisp")
(require :properties "properties")

(defpackage :table-view
  (:nicknames :table)
  (:use :cl :eql :qml))

(in-package :table)

(require :source-model "source-model")

(defvar *sort-filter-model* (qnew "QSortFilterProxyModel"))

(defun filter (text)                                                 ; called from QML
  (|setFilterWildcard| *sort-filter-model* text))

(defun sort-column (role-name &optional (order |Qt.AscendingOrder|)) ; called from QML
  (let ((role (car (find role-name (|roleNames| *sort-filter-model*)
                         :key 'cdr :test 'string=))))
    (x:do-with *sort-filter-model*
      (|setSortRole| role)
      (|sort| 0 order))))

(defun add-books ()
  (add-book "Moby-Dick" "Herman Melville")
  (add-book "The Adventures of Tom Sawyer" "Mark Twain")
  (add-book "Cat’s Cradle" "Kurt Vonnegut")
  (add-book "Farenheit 451" "Ray Bradbury")
  (add-book "It" "Stephen King")
  (add-book "On the Road" "Jack Kerouac")
  (add-book "Of Mice and Men" "John Steinbeck")
  (add-book "Do Androids Dream of Electric Sheep?" "Philip K. Dick")
  (add-book "Uncle Tom’s Cabin" "Harriet Beecher Stowe")
  (add-book "The Call of the Wild" "Jack London")
  (add-book "The Old Man and the Sea" "Ernest Hemingway")
  (add-book "A Streetcar Named Desire" "Tennessee Williams")
  (add-book "Catch-22" "Joseph Heller")
  (add-book "One Flew Over the Cuckoo’s Nest" "Ken Kesey")
  (add-book "The Murders in the Rue Morgue" "Edgar Allan Poe")
  (add-book "Breakfast at Tiffany’s" "Truman Capote")
  (add-book "Death of a Salesman" "Arthur Miller")
  (add-book "Post Office" "Charles Bukowski")
  (add-book "Herbert West—Reanimator" "H. P. Lovecraft"))

(defun run ()
  ;; model & data
  (make-book-model)
  (add-books)
  (|setFilterCaseSensitivity| *sort-filter-model* |Qt.CaseInsensitive|)
  (|setSourceModel| *sort-filter-model* *book-model*)
  ;; view
  (setf qml:*quick-view* (qnew "QQmlApplicationEngine")) ; because of QML ApplicationWindow
  (|setContextProperty| (|rootContext| qml:*quick-view*) "sortFilterModel" *sort-filter-model*)
  (|load| qml:*quick-view* "qml/table-view.qml"))

(run)
