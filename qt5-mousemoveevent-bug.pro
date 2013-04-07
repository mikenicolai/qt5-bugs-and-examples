QT += widgets core gui opengl

HEADERS         = mainwindow.h\
                  glwidget.h
SOURCES         = main.cpp \
                  mainwindow.cpp\
                  glwidget.cpp
RESOURCES       = qt5-mousemoveevent-bug.qrc

OTHER_FILES +=  simple.vert \
                simple.frag


