import QtQuick 2.7
import QtQuick.Controls 2.1
import Ctrller 1.1
import PtDrawer 1.1

ApplicationWindow {
    id: idMainview
    visible: true
    title: "Thiết Kế Phong Thủy"
    visibility: (Qt.platform.os == "android" || Qt.platform.os == "ios") ? "FullScreen" : "Maximized"
    flags: (Qt.platform.os == "android" || Qt.platform.os == "ios") ? Qt.FramelessWindowHint|Qt.Window : Qt.Window

    Ctrller {
        id: idCtrller
    }

    PtDrawer {
        anchors.fill: parent
    }
}
