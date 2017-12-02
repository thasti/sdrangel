/**
 * SDRangel
 * This is the web API of SDRangel SDR software. SDRangel is an Open Source Qt5/OpenGL 3.0+ GUI and server Software Defined Radio and signal analyzer in software. It supports Airspy, BladeRF, HackRF, LimeSDR, PlutoSDR, RTL-SDR, SDRplay RSP1 and FunCube
 *
 * OpenAPI spec version: 4.0.0
 * Contact: f4exb06@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


#include "SWGPresetIdentifier.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGPresetIdentifier::SWGPresetIdentifier(QString* json) {
    init();
    this->fromJson(*json);
}

SWGPresetIdentifier::SWGPresetIdentifier() {
    init();
}

SWGPresetIdentifier::~SWGPresetIdentifier() {
    this->cleanup();
}

void
SWGPresetIdentifier::init() {
    group_name = new QString("");
    center_frequency = 0L;
    type = new QString("");
    name = new QString("");
}

void
SWGPresetIdentifier::cleanup() {
    
    if(group_name != nullptr) {
        delete group_name;
    }


    if(type != nullptr) {
        delete type;
    }

    if(name != nullptr) {
        delete name;
    }
}

SWGPresetIdentifier*
SWGPresetIdentifier::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGPresetIdentifier::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&group_name, pJson["groupName"], "QString", "QString");
    ::SWGSDRangel::setValue(&center_frequency, pJson["centerFrequency"], "qint64", "");
    ::SWGSDRangel::setValue(&type, pJson["type"], "QString", "QString");
    ::SWGSDRangel::setValue(&name, pJson["name"], "QString", "QString");
}

QString
SWGPresetIdentifier::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGPresetIdentifier::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    toJsonValue(QString("groupName"), group_name, obj, QString("QString"));

    obj->insert("centerFrequency", QJsonValue(center_frequency));

    toJsonValue(QString("type"), type, obj, QString("QString"));

    toJsonValue(QString("name"), name, obj, QString("QString"));

    return obj;
}

QString*
SWGPresetIdentifier::getGroupName() {
    return group_name;
}
void
SWGPresetIdentifier::setGroupName(QString* group_name) {
    this->group_name = group_name;
}

qint64
SWGPresetIdentifier::getCenterFrequency() {
    return center_frequency;
}
void
SWGPresetIdentifier::setCenterFrequency(qint64 center_frequency) {
    this->center_frequency = center_frequency;
}

QString*
SWGPresetIdentifier::getType() {
    return type;
}
void
SWGPresetIdentifier::setType(QString* type) {
    this->type = type;
}

QString*
SWGPresetIdentifier::getName() {
    return name;
}
void
SWGPresetIdentifier::setName(QString* name) {
    this->name = name;
}


}

