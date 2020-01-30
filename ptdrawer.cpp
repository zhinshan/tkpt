#include "ptdrawer.h"

PtDrawer::PtDrawer(QQuickItem *parent)
    :QQuickPaintedItem(parent)
{
}

void PtDrawer::paint(QPainter *painter)
{
    painter->setRenderHint(QPainter::Antialiasing);

    // set painter viewport
    QRectF vwport = painter->viewport();
    float wi = vwport.width();
    float hi = vwport.height();

    QPainterPath path;
    path.moveTo(0, 0);
    path.lineTo(wi, hi);

    painter->drawPath(path);
}
