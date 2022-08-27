#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "BasicControls/iclistview.h"
#include "topheaderview.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
Q_OBJECT

public:
explicit MainWindow(QWidget *parent = nullptr);
~MainWindow();

void initListView();

private:
Ui::MainWindow *ui;
ICListView* _list_view;
TopHeaderView* _top_header;
};

#endif // MAINWINDOW_H
