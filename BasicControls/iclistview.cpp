#include "iclistview.h"

ICListView::ICListView(QWidget *parent)
{
    this->setParent(parent);
    pScroller = QScroller::scroller(this);
    pScroller->grabGesture(this,QScroller::LeftMouseButtonGesture);
    //  垂直方向按照像素的形式来滑动
    this->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
}
