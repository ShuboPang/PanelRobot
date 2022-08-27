#include "topheaderview.h"
#include "ui_topheaderview.h"

TopHeaderView::TopHeaderView(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TopHeaderView)
{
    ui->setupUi(this);
}

TopHeaderView::~TopHeaderView()
{
    delete ui;
}

void TopHeaderView::on_login_btn_clicked()
{

}

