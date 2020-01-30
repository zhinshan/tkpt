#include "appctrller.h"
#include "config.h"
#include <QDebug>

AppCtrller::AppCtrller(QObject *parent) : QObject(parent)
{
    QJsonObject j = Config::inst()->asJson();

    qDebug() << "Config ... =" << j;
}
