
#include <QtWidgets>

#include "mainwindow.h"

MainWindow::MainWindow()
{

    QGLFormat glFormat;
    glFormat.setVersion( 3, 2 );
    glFormat.setProfile( QGLFormat::CoreProfile ); // Requires >=Qt-4.8.0
    glFormat.setSampleBuffers( true );

    this->glwidget = new GLWidget( glFormat , this);
    setCentralWidget(glwidget);

    statusBar()->showMessage(tr("Ready"));

}
