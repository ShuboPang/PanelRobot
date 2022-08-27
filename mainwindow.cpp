#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QListView>
#include <QAbstractListModel>
#include <QStringListModel>
#include <QScroller>
#include <qdebug.h>

MainWindow::MainWindow(QWidget *parent) :
QMainWindow(parent), ui(new Ui::MainWindow)
{
ui->setupUi(this);
_top_header = new TopHeaderView(ui->centralWidget);
initListView();
}

MainWindow::~MainWindow()
{
delete ui;
}

void MainWindow::initListView(){
     _list_view = new ICListView(ui->centralWidget);
     _list_view->move(0,_top_header->height());
     QStringListModel *model = new QStringListModel(ui->centralWidget);
    _list_view->setModel(model);
    qDebug()<<_list_view->viewport()->size();
    QStringList stringList;
    for (int i = 0;i<10;i++) {
        stringList<<"123456789----"<<QString::number(i);
        stringList<<"qwertyuiop\nasdfghjkl";
    }

    model->setStringList(stringList);
    _list_view->show();
}
