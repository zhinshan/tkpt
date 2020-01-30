#ifndef PTDRAWER_H
#define PTDRAWER_H

#include <QPainter>
#include <QQuickPaintedItem>

class PtDrawer : public QQuickPaintedItem
{
public:
    PtDrawer(QQuickItem* parent=0);

    void paint(QPainter *painter);
};

#endif // PTDRAWER_H
