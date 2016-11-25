#+unix (si::trap-fpe t nil)

(ql:quickload :cl-opengl)

(unless (eql:qrequire :opengl)
  (error "EQL module :opengl could not be found/loaded")
  (eql:qq))

(load (eql:in-home "examples/8-OpenGL/main-window"))

(main-window:start)
