#include "actionmenuview.h"
#include "Teach/waitactioncommand.h"
#include <QGridLayout>
#include <QPushButton>

ActionMenuView::ActionMenuView(QWidget *parent) : QWidget(parent)
{
    _current_action_page = nullptr;
    _menu = new QWidget(this);
    QGridLayout* layout = new QGridLayout(_menu);
    _action_commands = new QVector<ActionCommandEditorBase*>;

    WaitActionCommand* wait_action = new WaitActionCommand(this);
    _action_commands->append(wait_action);
    QPushButton* wait_btn = new QPushButton(this);
    layout->addWidget(wait_btn);
    wait_btn->setText(wait_action->GetActionName());
    QObject::connect(wait_btn,SIGNAL(clicked(bool)),this,SLOT(onWaitActionOnClicked(bool)));


}

void ActionMenuView::onWaitActionOnClicked(bool click){
    _current_action_page = _action_commands->at(0);
    _current_action_page->show();
    _menu->hide();
}


void ActionMenuView::showEvent(QShowEvent *event){
    _menu->show();
    if(_current_action_page != nullptr){
        _current_action_page->setVisible(false);
        _current_action_page = nullptr;
    }
}

void ActionMenuView::closeEvent(QCloseEvent *event){

}
