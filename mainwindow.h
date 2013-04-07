
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QGLWidget>
#include <QGLContext>

#include "glwidget.h"


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow();


private:

    GLWidget *glwidget;

};
#endif
