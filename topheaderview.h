#ifndef TOPHEADERVIEW_H
#define TOPHEADERVIEW_H

#include <QWidget>

namespace Ui {
class TopHeaderView;
}

class TopHeaderView : public QWidget
{
    Q_OBJECT

public:
    explicit TopHeaderView(QWidget *parent = nullptr);
    ~TopHeaderView();

private slots:
    void on_login_btn_clicked();

private:
    Ui::TopHeaderView *ui;
};

#endif // TOPHEADERVIEW_H
