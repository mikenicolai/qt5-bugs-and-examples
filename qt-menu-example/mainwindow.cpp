#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    //about
    QAction *aboutAction = new QAction(tr("&About..."), this);
    aboutAction->setStatusTip(tr("Show About dialog"));

    //help issue 1
    QAction *helpAction = new QAction(tr("&Help..."), this);
    aboutAction->setStatusTip(tr("Show Help "));


    // preferences
    QAction *preferencesAction = new QAction(tr("&Preferences..."), this);
    preferencesAction->setShortcut(tr("Ctrl+,"));
    preferencesAction->setStatusTip(tr("Show preferences dialog"));


    //tool
    QAction *toolAction = new QAction(tr("&Tool..."), this);
    aboutAction->setStatusTip(tr("Activate Tool "));




    QMenu *helpMenu = menuBar()->addMenu(tr("&Help"));
    helpMenu->addAction(aboutAction);
    helpMenu->addAction(helpAction);




    QMenu *toolMenu = menuBar()->addMenu(tr("&Tools"));
    toolMenu->addAction(preferencesAction);
    toolMenu->addAction(toolAction);





}

MainWindow::~MainWindow()
{
    delete ui;
}
