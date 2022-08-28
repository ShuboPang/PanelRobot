#ifndef BOTTOMBUTTONS_H
#define BOTTOMBUTTONS_H

#include <QWidget>

namespace Ui {
class BottomButtons;
}

class BottomButtons : public QWidget
{
    Q_OBJECT

public:
    explicit BottomButtons(QWidget *parent = nullptr);
    ~BottomButtons();

    bool setButtonText(const QStringList& texts);

    void setButton1Text(const QString& text);
    void setButton2Text(const QString& text);
    void setButton3Text(const QString& text);
    void setButton4Text(const QString& text);
    void setButton5Text(const QString& text);
    void setButton6Text(const QString& text);
    void setButton7Text(const QString& text);

signals:
    void pushButton1OnClicked();
    void pushButton2OnClicked();
    void pushButton3OnClicked();
    void pushButton4OnClicked();
    void pushButton5OnClicked();
    void pushButton6OnClicked();
    void pushButton7OnClicked();

private slots:
    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

private:
    Ui::BottomButtons *ui;
};

#endif // BOTTOMBUTTONS_H
