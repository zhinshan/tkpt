#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QDate>
#include <QDir>
#include <logger.h>
#include "appctrller.h"
#include "ptdrawer.h"

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    bool filelog=true;

    // Logger config ---
    QDir logDir = QString("%1/%2").arg(QCoreApplication::applicationDirPath()).arg("logs");
    if (!logDir.exists()){
        QDir().mkdir(QString("%1/%2").arg(QCoreApplication::applicationDirPath()).arg("logs"));
    }
    QString logFName = QString("%1/logs/%2").arg(QCoreApplication::applicationDirPath()).arg("applog.log");
    QFile logFile(logFName);
    QFileInfo logFileInfo(logFile);
    QDate lastModified = logFileInfo.lastModified().date();
    QDate currentDate = QDate::currentDate();
    if (lastModified!=currentDate){
        QString logNewFName = "applog." + lastModified.toString("dd.MM.yyyy") + ".log";
        logFile.rename(QString("%1/logs/%2").arg(QCoreApplication::applicationDirPath()).arg(logNewFName));
        QFile logOldFile(logFName);
        logOldFile.remove();
    }
    Logger::setMode(1);
    if( filelog ) {
        Logger::initialize(logFName.toStdString().data(), "applog");
    }
    // Logger config end ---

    qmlRegisterType<AppCtrller> ("Ctrller", 1,1, "Ctrller");
    qmlRegisterType<PtDrawer>   ("PtDrawer",1,1, "PtDrawer");

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
