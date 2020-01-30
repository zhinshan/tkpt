#ifndef APPCTRLLER_H
#define APPCTRLLER_H

#include <QObject>
#include <QJsonObject>

class AppCtrller : public QObject
{
    Q_OBJECT
public:
    explicit AppCtrller(QObject *parent = nullptr);

signals:

public slots:
};

#endif // APPCTRLLER_H
