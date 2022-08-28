#include "actioncommandmodel.h"

ActionCommandModel::ActionCommandModel(QObject *parent)
    : QAbstractItemModel(parent)
{
}

QVariant ActionCommandModel::headerData(int section, Qt::Orientation orientation, int role) const
{
    // FIXME: Implement me!
}

QModelIndex ActionCommandModel::index(int row, int column, const QModelIndex &parent) const
{
    // FIXME: Implement me!
}

QModelIndex ActionCommandModel::parent(const QModelIndex &index) const
{
    // FIXME: Implement me!
}

int ActionCommandModel::rowCount(const QModelIndex &parent) const
{
    if (!parent.isValid())
        return 0;

    // FIXME: Implement me!
}

int ActionCommandModel::columnCount(const QModelIndex &parent) const
{
    if (!parent.isValid())
        return 0;

    // FIXME: Implement me!
}

QVariant ActionCommandModel::data(const QModelIndex &index, int role) const
{
    if (!index.isValid())
        return QVariant();

    // FIXME: Implement me!
    return QVariant();
}
