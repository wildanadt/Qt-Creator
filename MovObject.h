#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

#include <QSerialPort>

class MovObject : public QWidget
{
   Q_OBJECT

public:

    MovObject(QWidget *parent = nullptr);
    ~MovObject();

};

#endif // WIDGET_H
