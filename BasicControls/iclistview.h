#ifndef ICLISTVIEW_H
#define ICLISTVIEW_H

#include <QListView>
#include <QScroller>

class ICListView : public QListView
{
    Q_OBJECT
public:
    ICListView(QWidget *parent = nullptr);

private:
    QScroller *pScroller;
};

#endif // ICLISTVIEW_H
