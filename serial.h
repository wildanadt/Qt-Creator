#ifndef SERIAL_H
#define SERIAL_H

#include <QtSerialPort/QSerialPort>
#include <QObject>


class Serial :  public QSerialPort
{
    Q_OBJECT

public:

    Serial();
    QByteArray *data;

public slots:

    void terimaData();

signals:

    void buff(QString buff);

private:

    QSerialPort *serial;

};

#endif // SERIAL_H
