#ifndef WAITACTIONCOMMAND_H
#define WAITACTIONCOMMAND_H

#include "actioncommandeditorbase.h"

class WaitActionCommand : public ActionCommandEditorBase
{
    Q_OBJECT
public:
    WaitActionCommand(QWidget *parent = nullptr);

    QVariant* CreateActionObjedct() override;
    QString GetActionName() override;
    quint32 GetActionCommand() override;
};

#endif // WAITACTIONCOMMAND_H
