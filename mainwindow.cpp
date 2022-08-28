#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QListView>
#include <QAbstractListModel>
#include <QStringListModel>
#include <QScroller>
#include <qdebug.h>
#include <QHBoxLayout>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->centralWidget->resize(800,600);
    initMainWindow();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::initMainWindow(){
    _top_header = new TopHeaderView(ui->centralWidget);
    _bottom_buttons = new BottomButtons(ui->centralWidget);
    _bottom_buttons->move(0,ui->centralWidget->height()-_bottom_buttons->height());
    QStringList str;
    str<<tr("动作菜单")<<tr("插入")<<tr("上移")<<tr("下移")<<tr("删除")<<tr("整理编号")<<tr("保存");
    _bottom_buttons->setButtonText(str);

    ui->tabWidget->setTabText(ui->tabWidget->indexOf(ui->manual_tab),tr("手动操作"));
    ui->tabWidget->setTabText(ui->tabWidget->indexOf(ui->config_tab),tr("参数设定"));
    ui->tabWidget->setTabText(ui->tabWidget->indexOf(ui->teach_tab),tr("编程"));

    initTeachView();
}

void MainWindow::initTeachView(){
    _teach_veiw._program_sel = new ICComBox(ui->teach_tab);
    _teach_veiw._program_sel->setConfigItem(QStringList()<<tr("主程序")<<tr("子程序1")<<tr("子程序2"));
    _teach_veiw._program_sel->setConfigName(tr("程序选择"));

    _teach_veiw._moudel_sel = new ICComBox(ui->teach_tab);
    _teach_veiw._moudel_sel->setConfigItem(QStringList()<<tr("主模块"));
    _teach_veiw._moudel_sel->setConfigName(tr("模块选择"));

    QWidget* menu = new QWidget(ui->teach_tab);

    QHBoxLayout* layout = new QHBoxLayout(menu);

    layout->addWidget(_teach_veiw._program_sel);
    layout->addWidget(_teach_veiw._moudel_sel);
    layout->setAlignment(_teach_veiw._program_sel,Qt::AlignVCenter);
    layout->setAlignment(_teach_veiw._moudel_sel,Qt::AlignVCenter);
    layout->setSpacing(5);

    initActionMenuView();
    initListView();

    QObject::connect(_bottom_buttons,SIGNAL(pushButton1OnClicked()),this,SLOT(onActionMenuClick()));
}

void MainWindow::resizeListView(){
    if(_list_view == nullptr || ui->teach_tab == nullptr || _teach_veiw._program_sel == nullptr || _teach_veiw._action_menu_view == nullptr){
        return ;
    }
    if(_teach_veiw._action_menu_view->isVisible()){
        _list_view->resize(ui->teach_tab->width(),ui->teach_tab->height()-_teach_veiw._program_sel->height()-5 - _teach_veiw._action_menu_view->height());
    }
    else{
        _list_view->resize(ui->teach_tab->width(),ui->teach_tab->height()-_teach_veiw._program_sel->height()-5);
    }

}

void MainWindow::initActionMenuView(){
    _teach_veiw._action_menu_view = new QWidget(ui->teach_tab);
    _teach_veiw._action_menu_view->resize(ui->teach_tab->width(),250);
    _teach_veiw._action_menu_view->move(0,ui->teach_tab->height() - _teach_veiw._action_menu_view->height());
    _teach_veiw._action_menu_view->setVisible(false);
    _teach_veiw._action_menu = new ActionMenuView(_teach_veiw._action_menu_view);
}

void MainWindow::initListView(){
    _list_view = new ICListView(ui->teach_tab);
    _list_view->resize(ui->teach_tab->width(),ui->teach_tab->height()-_teach_veiw._program_sel->height()-5);
    _list_view->move(0,_teach_veiw._program_sel->height()+5);
    QStringListModel *model = new QStringListModel(ui->teach_tab);
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

void MainWindow::onActionMenuClick(){
    _teach_veiw._action_menu_view->setVisible(!_teach_veiw._action_menu_view->isVisible());
    this->resizeListView();
}

