#ifndef CONFIG_H
#define CONFIG_H

#include <QObject>
#include <QJsonObject>

class Config
{
public:
    static Config* inst() {
        if( Config::_inst == nullptr) {
            Config::_inst = new Config();
        }

        return Config::_inst;
    }

    QJsonObject asJson();

private:
    static Config* _inst;
    Config();
    ~Config();

};

#endif // CONFIG_H
