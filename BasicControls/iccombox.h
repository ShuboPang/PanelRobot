#ifndef ICCOMBOX_H
#define ICCOMBOX_H

#include <QWidget>
#include <QComboBox>
#include <QLabel>

class ICComBox : public QWidget
{
    Q_OBJECT
public:
    explicit ICComBox(QWidget *parent = nullptr);

    void setConfigName(const QString& text);
    void setConfigItem(const QStringList& texts);

signals:

private:
    QComboBox* _comBox;
    QLabel* _name;
};

#endif // ICCOMBOX_H
