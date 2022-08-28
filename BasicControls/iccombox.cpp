#include "iccombox.h"
#include <QHBoxLayout>
ICComBox::ICComBox(QWidget *parent) : QWidget(parent)
{
     QHBoxLayout* layout = new QHBoxLayout(this);
    _comBox = new QComboBox(this);
    _name = new QLabel(this);

    layout->addWidget(_name);
    layout->addWidget(_comBox);
    layout->setAlignment(_name,Qt::AlignVCenter);
    layout->setAlignment(_comBox,Qt::AlignVCenter);
    layout->setSpacing(5);
}

void ICComBox::setConfigName(const QString& text){
    _name->setText(text);
}

void ICComBox::setConfigItem(const QStringList& texts){
    _comBox->clear();
    _comBox->addItems(texts);
}
