#include "bottombuttons.h"
#include "ui_bottombuttons.h"

BottomButtons::BottomButtons(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BottomButtons)
{
    ui->setupUi(this);
}

BottomButtons::~BottomButtons()
{
    delete ui;
}

bool BottomButtons::setButtonText(const QStringList& texts){
    if(texts.length() != 7){
        return false;
    }
    this->setButton1Text(texts.at(0));
    this->setButton2Text(texts.at(1));
    this->setButton3Text(texts.at(2));
    this->setButton4Text(texts.at(3));
    this->setButton5Text(texts.at(4));
    this->setButton6Text(texts.at(5));
    this->setButton7Text(texts.at(6));
    return true;
}

void BottomButtons::setButton1Text(const QString& text){
    ui->pushButton_1->setText(text);
}
void BottomButtons::setButton2Text(const QString& text){
    ui->pushButton_2->setText(text);
}
void BottomButtons::setButton3Text(const QString& text){
    ui->pushButton_3->setText(text);
}
void BottomButtons::setButton4Text(const QString& text){
    ui->pushButton_4->setText(text);
}
void BottomButtons::setButton5Text(const QString& text){
    ui->pushButton_5->setText(text);
}
void BottomButtons::setButton6Text(const QString& text){
    ui->pushButton_6->setText(text);
}
void BottomButtons::setButton7Text(const QString& text){
    ui->pushButton_7->setText(text);
}

void BottomButtons::on_pushButton_1_clicked()
{
    emit pushButton1OnClicked();
}


void BottomButtons::on_pushButton_2_clicked()
{
    emit pushButton2OnClicked();
}


void BottomButtons::on_pushButton_3_clicked()
{
    emit pushButton3OnClicked();
}


void BottomButtons::on_pushButton_4_clicked()
{
    emit pushButton4OnClicked();
}


void BottomButtons::on_pushButton_5_clicked()
{
    emit pushButton5OnClicked();
}


void BottomButtons::on_pushButton_6_clicked()
{
    emit pushButton6OnClicked();
}


void BottomButtons::on_pushButton_7_clicked()
{
    emit pushButton7OnClicked();
}

