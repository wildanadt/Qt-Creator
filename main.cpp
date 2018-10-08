#include "MovObject.h"
#include "gambar.h"
#include "serial.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MovObject w;
    w.show();

    return a.exec();
}
