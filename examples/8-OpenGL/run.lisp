#+unix (si::trap-fpe t nil)

(ql:quickload :cl-opengl)

(load (eql:in-home "examples/8-OpenGL/main-window"))

(main-window:start)
