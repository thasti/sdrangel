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

/*
 * SWGChannelListItem.h
 * 
 * Summarized information about channel plugin
 */

#ifndef SWGChannelListItem_H_
#define SWGChannelListItem_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"


namespace SWGSDRangel {

class SWGChannelListItem: public SWGObject {
public:
    SWGChannelListItem();
    SWGChannelListItem(QString* json);
    virtual ~SWGChannelListItem();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGChannelListItem* fromJson(QString &jsonString);

    QString* getName();
    void setName(QString* name);

    QString* getIdUri();
    void setIdUri(QString* id_uri);

    QString* getId();
    void setId(QString* id);

    qint32 getTx();
    void setTx(qint32 tx);

    QString* getVersion();
    void setVersion(QString* version);

    qint32 getIndex();
    void setIndex(qint32 index);


private:
    QString* name;
    QString* id_uri;
    QString* id;
    qint32 tx;
    QString* version;
    qint32 index;
};

}

#endif /* SWGChannelListItem_H_ */
