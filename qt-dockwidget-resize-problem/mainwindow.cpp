


#include "mainwindow.h"
#include <QDebug>
MainWindow::MainWindow()
{

    textEdit = new QTextEdit;
    setCentralWidget(textEdit);


    statusBar()->showMessage(tr("Ready"));



    QDockWidget *dock = new QDockWidget(tr("Customers"), this);
         dock->setAllowedAreas(Qt::LeftDockWidgetArea | Qt::RightDockWidgetArea);
         customerList = new QListWidget(dock);
         customerList->addItems(QStringList()
                 << "John Doe, Harmony Enterprises, 12 Lakeside, Ambleton"
                 << "Jane Doe, Memorabilia, 23 Watersedge, Beaton"
                 << "Tammy Shea, Tiblanka, 38 Sea Views, Carlton"
                 << "Tim Sheen, Caraba Gifts, 48 Ocean Way, Deal"
                 << "Sol Harvey, Chicos Coffee, 53 New Springs, Eccleston"
                 << "Sally Hobart, Tiroli Tea, 67 Long River, Fedula");
         dock->setWidget(customerList);
         addDockWidget(Qt::RightDockWidgetArea, dock);


}

void MainWindow::setDockWidgetSize(QDockWidget* dock, int setWidth = -1 ,int setHeight = -1)
{

   qDebug() << "inside resizeEvent of mainwindow " <<dock->width();

  if (setWidth>=0)
    if (dock->width()<setWidth)
        dock->setMinimumWidth(setWidth);
    else
    {
        dock->setMinimumWidth(1);
        dock->setMaximumWidth(setWidth);
    }
  if (setHeight>=0)
    if (dock->height()<setHeight)
        dock->setMinimumHeight(setHeight);
    else dock->setMaximumHeight(setHeight);

}



void MainWindow::resizeEvent ( QResizeEvent * event )
{


    event->size().width();

   //this->customerList->setMinimumWidth(event->size().width()/2);


   this->setDockWidgetSize((QDockWidget*&)this->customerList,event->size().width()/2);





}
