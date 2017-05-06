# comment out all modules you don't need:

SUBDIRS = help \
          multimedia \
          network \
          quick \
          sql \
          svg \
          # webengine \
          webkit

TEMPLATE = subdirs
SUBDIRS += lib exe

lib.file        = eql_lib.pro
exe.depends     = lib
exe.file        = eql_exe.pro
help.file       = module_help.pro
multimedia.file = module_multimedia.pro
network.file    = module_network.pro
quick.file      = module_quick.pro
sql.file        = module_sql.pro
svg.file        = module_svg.pro
webengine.file  = module_webengine.pro
webkit.file     = module_webkit.pro
