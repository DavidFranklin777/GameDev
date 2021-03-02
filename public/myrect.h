#ifndef MYRECT_H
#define MYRECT_H

#include <QGraphicsRectItem>
#include <QDebug>
#include <QKeyEvent>
#include <bullet.h>
#include <QGraphicsScene>

class MyRect: public QGraphicsRectItem
{
public:
    MyRect();

    void keyPressEvent(QKeyEvent *event);
};

#endif // MYRECT_H
