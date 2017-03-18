;;; source model for table view

(provide :source-model)

(defvar *books*      (make-array 0 :fill-pointer t :adjustable t))
(defvar *book-model* nil)

(defmacro define-roles (start &rest roles)
  (let ((n start))
    `(progn
       ,@(mapcar (lambda (role) `(defconstant ,role ,(incf n))) roles))))

(define-roles #.|Qt.UserRole|
  +title-role+
  +author-role+)

(defstruct book
  title
  author)

(defvar *empty-model-index* (qnew "QModelIndex"))

(defun add-book (title author)
  (|beginInsertRows| *book-model* *empty-model-index*
                     (|rowCount| *book-model*) (|rowCount| *book-model*))
  (vector-push-extend (make-book :title title :author author)
                      *books*)
  (|endInsertRows| *book-model*))

(defun variant (value)
  (cond ((stringp value)
         (qvariant-from-value value "QString"))))

(defvar *empty-variant* (qnew "QVariant"))

(defconstant +filter-role+ |Qt.DisplayRole|) ; see QSortFilterProxyModel

(defun make-book-model ()
  (setf *book-model* (qnew "QAbstractListModel"))
  (qoverride *book-model* "rowCount(QModelIndex)"
             (lambda (index) (length *books*)))
  (qoverride *book-model* "data(QModelIndex,int)" ; QOVERRIDE return value is GC'd
             (lambda (index role)
               (let* ((row (|row| index))
                      (data (when (< -1 row (length *books*))
                              (let ((book (aref *books* row)))
                                (case role
                                  (#.+filter-role+ ; provide string for search
                                   (variant (x:join (list (book-title book) (book-author book)) " ")))
                                  (#.+title-role+
                                   (variant (book-title book)))
                                  (#.+author-role+
                                   (variant (book-author book))))))))
                 (or data
                     *empty-variant*))))
  (qoverride *book-model* "roleNames()"
             (lambda ()
               (list (cons +title-role+  "title")
                     (cons +author-role+ "author")))))
