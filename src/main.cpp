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
    MyRect* player = new MyRect();

    //Add the item to the scene
    scene->addItem(player);

    //make rect focusable
    player->setFlag(QGraphicsItem::ItemIsFocusable);
    player->setFocus();

    //add a view
    QGraphicsView *view = new QGraphicsView(scene);
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setFixedSize(800,600);
    view->show();

    scene->setSceneRect(0,0,800,600);
    // Placing the player in the middle bottom. Trial and error method
    player->setPos(view->width()/2, view->height()-player->rect().height()-5);


    return a.exec();
}
