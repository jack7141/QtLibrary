#include "widget.h"
#include <QtGui>

TestQLib::TestQLib()
{

}
QWidget *createWidget1()
{
    QWidget *widget = new QWidget();
    widget->resize(100, 100);
    return widget;

}
