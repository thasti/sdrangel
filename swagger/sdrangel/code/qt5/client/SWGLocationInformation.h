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
 * SWGLocationInformation.h
 * 
 * Instance geolocation information
 */

#ifndef SWGLocationInformation_H_
#define SWGLocationInformation_H_

#include <QJsonObject>



#include "SWGObject.h"


namespace SWGSDRangel {

class SWGLocationInformation: public SWGObject {
public:
    SWGLocationInformation();
    SWGLocationInformation(QString* json);
    virtual ~SWGLocationInformation();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGLocationInformation* fromJson(QString &jsonString);

    float getLatitude();
    void setLatitude(float latitude);

    float getLongitude();
    void setLongitude(float longitude);


private:
    float latitude;
    float longitude;
};

}

#endif /* SWGLocationInformation_H_ */
