#ifndef ACTIONCOMMANDEDITORBASE_H
#define ACTIONCOMMANDEDITORBASE_H

#include <QWidget>
#include <QVariant>

class ActionCommandEditorBase: public QWidget
{
    Q_OBJECT
public:
    ActionCommandEditorBase(QWidget *parent = nullptr);


    virtual QVariant* CreateActionObjedct() = 0;
    virtual QString GetActionName() = 0;
    virtual quint32 GetActionCommand() = 0;
};

#endif // ACTIONCOMMANDEDITORBASE_H
