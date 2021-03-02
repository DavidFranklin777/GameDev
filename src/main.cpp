#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsView>
#include <myrect.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //Create a scene
    QGraphicsScene* scene = new QGraphicsScene();

    //Create an item to put in the scene
    MyRect* rect = new MyRect();
    rect->setRect(0,0,100,100);

    //Add the item to the scene
    scene->addItem(rect);

    //make rect focusable
    rect->setFlag(QGraphicsItem::ItemIsFocusable);
    rect->setFocus();

    //add a view
    QGraphicsView *view = new QGraphicsView(scene);

    view->show();

    return a.exec();
}
