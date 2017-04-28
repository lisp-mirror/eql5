;;;;
;;;  *** TO BE RECOMPILED ON EVERY UPGRADE OF YOUR ECL VERSION ***
;;;
;;;; *** PLEASE SEE "N.B." COMMENTS ***
;;;;
;;;; -------------------------------------------------------------------------------
;;;;
;;;; ecl-readline.lisp
;;;;
;;;; Copyright (C) 2008,2010 Jason Aquilina <jfa7600@yahoo.com.au>
;;;;
;;;; This program is free software; you can redistribute it and/or
;;;; modify it under the terms of the GNU General Public License
;;;; as published by the Free Software Foundation; either version 2
;;;; of the License, or (at your option) any later version.
;;;;
;;;; This program is distributed in the hope that it will be useful,
;;;; but WITHOUT ANY WARRANTY; without even the implied warranty of
;;;; MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
;;;; GNU General Public License for more details.
;;;;
;;;; You should have received a copy of the GNU General Public License
;;;; along with this program; if not, write to the Free Software
;;;; Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
;;;;

;;;;
;;;; Readline support for ECL
;;;;
;;;; Ideas and code stolen from:
;;;;    CL-READLINE by Nikodemus Siivola <nikodemus@random-state.net>
;;;;    SB-READLINE by Miles Egan <miles@caddr.com>
;;;;

(defpackage ecl-readline
  (:use :ffi :gray))

(in-package :ecl-readline)

(load-foreign-library "readline" :system-library t)
(load-foreign-library "ncurses"  :system-library t) ; N.B. (1) may or may not be needed (depending on version)

(defvar *history-size* 100)
(defvar *history-file* (concatenate 'base-string (si::getenv "HOME") "/.ecl-history"))
(defvar *prompt* "")
(defvar *prompt-more* "")
(defvar *newline* (string #\newline))
(defvar *use-package-nicknames* t)
(defvar *line-number* 0)
(defvar *current-package* nil)

(ffi:clines "#include <stdio.h>")
(ffi:clines "#include <readline/readline.h>")
(ffi:clines "#include <readline/history.h>")        ; N.B. (2) may or may not be needed (depending on version)

(defun rl-readline (prompt)
  (ffi:c-inline (prompt) (:cstring) :object
                "
                 char* line = readline(#0);
                 @(return) = make_base_string_copy(line);
                 free(line);
                "))

(defun rl-add-history (line)
  (if (> (length line) 0)
      (ffi:c-inline (line) (:cstring) :void
                    "add_history(#0)" :one-liner t)))

(defun rl-read-history (filename)
  (ffi:c-inline (filename) (:cstring) :int
                "read_history(#0)" :one-liner t))

(defun rl-write-history (filename)
  (ffi:c-inline (filename) (:cstring) :int
                "write_history(#0)" :one-liner t))

(defun rl-stifle-history (count)
  (ffi:c-inline (count) (:int) :void
                "stifle_history(#0)" :one-liner t))

(defclass input-stream (fundamental-character-input-stream)
  ((in-buffer :initform (make-string 0))
   (in-index  :initform 0)
   (out-buffer :initform (make-array 0 :element-type 'character :adjustable t :fill-pointer t))))

(defmethod stream-read-char ((stream input-stream))
  (if (ensure-stream-data stream)
      (with-slots (in-buffer in-index) stream
                  (let ((c (char in-buffer in-index)))
                    (incf in-index)
                    c))
    :eof))

(defmethod stream-unread-char ((stream input-stream) character)
  (with-slots (in-index) stream
    (if (> in-index 0)
        (decf in-index))))

(defmethod stream-listen ((stream input-stream))
  nil)

(defmethod stream-clear-input ((stream input-stream))
  nil)

(defmethod stream-close ((stream input-stream) &key abort)
  (call-next-method))

(defmethod stream-peek-char ((stream input-stream))
  (if (ensure-stream-data stream)
      (with-slots (in-buffer in-index) stream
                  (char in-buffer in-index))
    :eof))

(defun ensure-stream-data (stream)
  (with-slots (in-buffer in-index) stream
    (if (= in-index (length in-buffer))
        (setq in-buffer (readline)
              in-index 0))
    in-buffer))

(defun current-package-name ()
  (if *use-package-nicknames*
      (if (eq *package* (find-package "COMMON-LISP-USER"))
          "CL-USER"
          (car (sort
                (list* (package-name *package*) (package-nicknames *package*))
                (lambda (x y) (< (length x) (length y))))))
      (package-name *package*)))

(defun current-level ()
  (- si::*tpl-level* si::*step-level* -1))

(defun update-symbol-completions ()
  (unless (eq *package* *current-package*)
    (setq *current-package* *package*)
    (let ((entries (make-array 0 :adjustable t :fill-pointer t)))
      (do-symbols (s (find-package *current-package*))
        (let ((name (symbol-name s)))
          (vector-push-extend (if (some 'lower-case-p name)
                                  name ; Qt enums, Qt functions (see "all-wrappers")
                                  (string-downcase name))
                              entries)))
      (sort entries #'string<)
      (rl-delete-completions)
      (rl-allocate-completions (length entries))
      (loop for entry across entries
         do (rl-add-completion entry)))))
    
(defun prompt ()
  (fresh-line)
  (update-symbol-completions)
  (when (zerop (current-level))
    (incf *line-number*))
  (setq *prompt*
        (if (zerop (current-level))
            (format nil "~A[~A]> " (current-package-name) *line-number*)
            (format nil "** BREAK [LEVEL ~A]> " (current-level)))))

(defun readline ()
  (let ((line (rl-readline *prompt*)))
    (setq *prompt* *prompt-more*)
    (rl-add-history line)
    (rl-write-history *history-file*)
    (concatenate 'string line *newline*)))

(defun enable (&key ((:history-file filename) nil filename-p) ((:history-size size) nil size-p))
  (when filename-p
    (setq *history-file* filename))
  (when size-p
    (setq *history-size* size))
  (rl-read-history *history-file*)
  (rl-stifle-history *history-size*)
  (rl-use-symbol-completer)
  (setf system::*tpl-prompt-hook* #'prompt)
  (setq *standard-input* (make-instance 'input-stream))
  (setq *terminal-io* (make-two-way-stream *standard-input* (two-way-stream-output-stream *terminal-io*)))
  (setf system::*standard-input* system::*terminal-io*))

;;;

(ffi:clines "#include <stdlib.h>")
(ffi:clines "#include <string.h>")
(ffi:clines "#include <stdio.h>")
(ffi:clines "#include <readline/readline.h>")

(ffi:clines "static char** g_completions = NULL;")
(ffi:clines "static int g_index = 0;");

(ffi:clines
"
static char* symbol_completer(const char* str, int target)
{
  static char** ptr  = NULL;   /* pointer into completions array */
  static int length = 0;       /* cached length of str         */

  if (target == 0) {
    ptr = g_completions;
    length = strlen(str);

    while (*ptr && strncmp(str, *ptr, length) != 0)
      ptr++;

    return *ptr ? strdup(*ptr) : NULL;
  }

  if (*ptr && strncmp(str, *ptr, length) == 0)
      return strdup(*ptr++);

  return NULL;
}
")

(defun rl-add-completion (completion)
  (ffi:c-inline (completion) (:cstring) :void
                "g_completions[g_index++] = strdup(#0)" :one-liner t))

(defun rl-allocate-completions (length)
  (ffi:c-inline (length) (:int) :void
                "
                 g_index = 0;
                 g_completions = malloc(#0 * sizeof(char*) + 1);
                 g_completions[#0] = NULL;
                "))

(defun rl-delete-completions ()
  (ffi:c-inline () () :void
                "
                 if (g_completions) {
                   char** p = g_completions;
                   while (*p)
                     free(*p++);

                   free(g_completions);
                   g_completions = NULL;
                 }
                "))

(defun rl-use-symbol-completer ()
  (ffi:c-inline () () :void
                "rl_completion_entry_function = symbol_completer" :one-liner t))

(enable)

;;;; End of File


