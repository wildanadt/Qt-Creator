#ifndef GAMBAR_H
#define GAMBAR_H
#include <QGraphicsRectItem>
#include <QKeyEvent>


class Gambar : public QObject, public QGraphicsRectItem
{
  Q_OBJECT

public:

    Gambar();
public slots:

    void terima(QString dt);

};

#endif // GAMBAR_H
