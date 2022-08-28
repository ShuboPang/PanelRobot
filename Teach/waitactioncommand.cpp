#include "waitactioncommand.h"
#include <QLabel>

WaitActionCommand::WaitActionCommand(QWidget *parent)
{
    this->setParent(parent);
    QLabel* lab = new QLabel(this);
    lab->setText("Wait Action");
}


QVariant* WaitActionCommand::CreateActionObjedct(){
    return new QVariant();
}
QString WaitActionCommand::GetActionName(){
    return QString("Wait Action");
}

quint32 WaitActionCommand::GetActionCommand(){
    return 1;
}
