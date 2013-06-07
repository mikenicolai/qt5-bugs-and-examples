
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

 #include <QtGui>



class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow();

    QTextEdit *textEdit;
    QListWidget *customerList;

    void resizeEvent ( QResizeEvent * event );
    void setDockWidgetSize(QDockWidget* dock, int setWidth,int setHeight);

};
#endif
