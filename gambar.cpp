#include "gambar.h"
#include "serial.h"

#include <QDebug>

Gambar::Gambar(){}

void Gambar::terima(QString dt)
{
    if(dt.contains("u"))
    {
        setPos(x(),y()-10);
    }
    else if(dt.contains("l"))
    {
        setPos(x()-10,y());
    }
    else if(dt.contains("r"))
    {
        setPos(x()+10,y());
    }
    else if(dt.contains("d"))
    {
        setPos(x(),y()+10);
    }

    //while()

}





