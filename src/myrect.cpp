#include "myrect.h"


MyRect::MyRect()
{
   setRect(0,0,100,100);

}

void MyRect::keyPressEvent(QKeyEvent *event)
{
    qDebug() << "Button pressed";
    if(event->key() == Qt::Key_Left)
    {
        setPos(x()-10,y());
    }
    else if(event->key() == Qt::Key_Right)
    {
        setPos(x()+10,y());
    }
    else if(event->key() == Qt::Key_Down)
    {
       // Deactivate downward motion
        //setPos(x(),y()+10);
    }
    else if(event->key() == Qt::Key_Up)
    {
       // Deactivate upward motion
        //setPos(x(),y()-10);
    }
    else if(event->key() == Qt::Key_Space)
    {
        Bullet *bullet = new Bullet();
        bullet->setPos(x(), y());
        scene()->addItem(bullet);
    }
}
