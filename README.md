qt5-mousemoveevent-bug
======================

When trying to capture the MouseMoveEvent using the Qt-class MainWinndow on OSX with Qt 5.0.1, I was running in a bug-like behaviour. 
I could reproduce that behaviour in this example. The example is a simple QGLWidget and a statusbar inside a mainwindow.

The bug-like behaviour is the following: The MouseMoveEvent is only arriving when I enter the window not over the statusbar.




