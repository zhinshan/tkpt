TEMPLATE = app
TARGET = "Tkpt"
QT += quick xml quickcontrols2 svg
CONFIG += c++11

SOURCES += \
        main.cpp \
    tools/logger.cpp \
    config.cpp \
    appctrller.cpp \
    ptdrawer.cpp

RESOURCES += qml.qrc

INCLUDEPATH += $$PWD/ $$PWD/tools

HEADERS += \
    tools/logger.h \
    config.h \
    appctrller.h \
    ptdrawer.h

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
