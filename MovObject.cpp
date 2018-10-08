#include "MovObject.h"
#include "gambar.h"
#include "serial.h"

#include <QDebug>
#include <QGraphicsRectItem>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QSerialPort>
#include <QBrush>

MovObject::MovObject(QWidget *parent)
    : QWidget(parent)
{

    Gambar *gambar = new Gambar;

  // QLabel *label =new QLabel(tr("Judul"),this);
  //  label->setFixedHeight(20);

    QGraphicsScene *scene = new QGraphicsScene;
    QGraphicsView *view = new QGraphicsView(this);

    gambar->setRect(QRectF(0,0,50,50));
    gambar->setBrush(Qt::red);

  //  gambar->setFlag(QGraphicsItem::ItemIsFocusable);
  //  gambar->setFocus();

    scene->addItem(gambar);

    view->setFixedSize(300,300);
    view->setScene(scene);
    view->setBackgroundBrush(QBrush(Qt::black));
    Serial *serial = new Serial();
    connect(serial,SIGNAL(readyRead()),serial,SLOT(terimaData()));
    connect(serial,SIGNAL(buff(QString)),gambar,SLOT(terima(QString)));


}

MovObject::~MovObject()
{
    qDebug()<<"close";
}






