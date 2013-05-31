
#include <QApplication>
#include <QGLFormat>

#include "glwidget.h"

#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    //#define WITHOUT_MAINWINDOW
    #ifdef WITHOUT_MAINWINDOW
       QGLFormat glFormat;  glFormat.setVersion( 3, 2 );  // we need openGL 3.2 for the shaders
       glFormat.setProfile( QGLFormat::CoreProfile );     // needed because the problem occurs on osx
       glFormat.setSampleBuffers( true );
       GLWidget w( glFormat );
       w.resize(600,500);
       w.show();
    #else
       MainWindow mainWin;
       mainWin.resize(600,500);
       mainWin.show();
    #endif
    return app.exec();
}
