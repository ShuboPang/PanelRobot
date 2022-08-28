#ifndef TOPHEADERVIEW_H
#define TOPHEADERVIEW_H

#include <QWidget>
#include <QPixmap>

namespace Ui {
class TopHeaderView;
}

class TopHeaderView : public QWidget
{
    Q_OBJECT

public:
    explicit TopHeaderView(QWidget *parent = nullptr);
    ~TopHeaderView();

    void setStatusImage(const QPixmap& img);

signals:
    void loginBtnOnClicked();
    void alarmLogBtnOnCliciked();
    void recordBtnOnClicked();
    void ioViewBtnOnClicked();

private slots:
    void on_login_btn_clicked();

private:
    Ui::TopHeaderView *ui;
};

#endif // TOPHEADERVIEW_H
