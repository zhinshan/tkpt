#include "config.h"

Config* Config::_inst = nullptr;

Config::Config()
{

}

QJsonObject Config::asJson()
{
    QJsonObject j;
    return j;
}
