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


#include "SWGInstanceChannelsResponse.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGInstanceChannelsResponse::SWGInstanceChannelsResponse(QString* json) {
    init();
    this->fromJson(*json);
}

SWGInstanceChannelsResponse::SWGInstanceChannelsResponse() {
    init();
}

SWGInstanceChannelsResponse::~SWGInstanceChannelsResponse() {
    this->cleanup();
}

void
SWGInstanceChannelsResponse::init() {
    channelcount = 0;
    channels = new QList<SWGChannelListItem*>();
}

void
SWGInstanceChannelsResponse::cleanup() {
    

    if(channels != nullptr) {
        QList<SWGChannelListItem*>* arr = channels;
        foreach(SWGChannelListItem* o, *arr) {
            delete o;
        }
        delete channels;
    }
}

SWGInstanceChannelsResponse*
SWGInstanceChannelsResponse::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGInstanceChannelsResponse::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&channelcount, pJson["channelcount"], "qint32", "");
    
    ::SWGSDRangel::setValue(&channels, pJson["channels"], "QList", "SWGChannelListItem");
    
}

QString
SWGInstanceChannelsResponse::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGInstanceChannelsResponse::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    obj->insert("channelcount", QJsonValue(channelcount));

    QJsonArray channelsJsonArray;
    toJsonArray((QList<void*>*)channels, &channelsJsonArray, "channels", "SWGChannelListItem");
    obj->insert("channels", channelsJsonArray);

    return obj;
}

qint32
SWGInstanceChannelsResponse::getChannelcount() {
    return channelcount;
}
void
SWGInstanceChannelsResponse::setChannelcount(qint32 channelcount) {
    this->channelcount = channelcount;
}

QList<SWGChannelListItem*>*
SWGInstanceChannelsResponse::getChannels() {
    return channels;
}
void
SWGInstanceChannelsResponse::setChannels(QList<SWGChannelListItem*>* channels) {
    this->channels = channels;
}


}

