#include "serial.h"
#include "gambar.h"

#include <QDebug>
#include <QSerialPortInfo>

Serial::Serial()
{

    foreach (const QSerialPortInfo &port, QSerialPortInfo::availablePorts())
    {
        setPort(port);
    }

    setBaudRate(QSerialPort::Baud9600);
    setDataBits(QSerialPort::Data8);
    setParity(QSerialPort::NoParity);
    setStopBits(QSerialPort::OneStop);
    setFlowControl(QSerialPort::NoFlowControl);
    open(QIODevice::ReadWrite);

}

void Serial::terimaData()
{
    QByteArray data;

    QString s;
    s=QString(data=readAll());

    qDebug()<<s;

    emit buff(s);

}

