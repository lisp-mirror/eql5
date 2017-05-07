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

lib.file           = eql_lib.pro
exe.file           = eql_exe.pro
exe.depends        = lib
help.file          = module_help.pro
help.depends       = lib exe
multimedia.file    = module_multimedia.pro
multimedia.depends = lib exe
network.file       = module_network.pro
network.depends    = lib exe
quick.file         = module_quick.pro
quick.depends      = lib exe
sql.file           = module_sql.pro
sql.depends        = lib exe
svg.file           = module_svg.pro
svg.depends        = lib exe
webengine.file     = module_webengine.pro
webengine.depends  = lib exe
webkit.file        = module_webkit.pro
webkit.depends     = lib exe
