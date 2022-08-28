#include "topheaderview.h"
#include "ui_topheaderview.h"

TopHeaderView::TopHeaderView(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TopHeaderView)
{
    ui->setupUi(this);

    QPixmap pixmap = QPixmap(":/images/status_run.png");
    setStatusImage(pixmap);
}

TopHeaderView::~TopHeaderView()
{
    delete ui;
}

void TopHeaderView::on_login_btn_clicked()
{
    emit loginBtnOnClicked();
}

void TopHeaderView::setStatusImage(const QPixmap& img){
    ui->status_img->setPixmap(img);
}

