#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
}

Widget::~Widget()
{

}

void Widget::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event)
}
