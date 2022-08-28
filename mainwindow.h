#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "BasicControls/iclistview.h"
#include "topheaderview.h"
#include "bottombuttons.h"
#include "BasicControls/iccombox.h"
#include "actionmenuview.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void initMainWindow();
    void initListView();
    void initTeachView();
    void initActionMenuView();

    // 重新计算列表大小
    void resizeListView();


public slots:
    void onActionMenuClick();       //< 动作菜单按钮点击

private:
    Ui::MainWindow *ui;
    ICListView* _list_view;
    TopHeaderView* _top_header;
    BottomButtons* _bottom_buttons;


    struct{
        ICComBox* _program_sel;
        ICComBox* _moudel_sel;
        QWidget* _action_menu_view;
        ActionMenuView* _action_menu;
    }_teach_veiw;
};

#endif // MAINWINDOW_H
