#ifndef ACTIONMENUVIEW_H
#define ACTIONMENUVIEW_H

#include <QWidget>
#include <QVector>
#include <QGridLayout>
#include "actioncommandeditorbase.h"

class ActionMenuView : public QWidget
{
    Q_OBJECT
public:
    explicit ActionMenuView(QWidget *parent = nullptr);

signals:

public slots:
    void showEvent(QShowEvent *event);
    void closeEvent(QCloseEvent *event);

    void onWaitActionOnClicked(bool click);

private:
    QVector<ActionCommandEditorBase*> *_action_commands;
    QWidget* _menu;
    ActionCommandEditorBase* _current_action_page;
};

#endif // ACTIONMENUVIEW_H
