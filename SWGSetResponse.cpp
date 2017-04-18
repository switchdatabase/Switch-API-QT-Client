/**
 * Switch Database REST API
 * Switch API is the primary endpoint of data sevices and Switch DB's platform. You can do adding, editing, deleting or listing data works to your database with query operations by using this low-level API based on HTTP.
 *
 * OpenAPI spec version: 1.2.1
 * 
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


#include "SWGSetResponse.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGSetResponse::SWGSetResponse(QString* json) {
    init();
    this->fromJson(*json);
}

SWGSetResponse::SWGSetResponse() {
    init();
}

SWGSetResponse::~SWGSetResponse() {
    this->cleanup();
}

void
SWGSetResponse::init() {
    response_time = 0L;
    response = new QString("");
}

void
SWGSetResponse::cleanup() {
    

    if(response != nullptr) {
        delete response;
    }
}

SWGSetResponse*
SWGSetResponse::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGSetResponse::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&response_time, pJson["ResponseTime"], "qint64", "");
    ::Swagger::setValue(&response, pJson["Response"], "QString", "QString");
}

QString
SWGSetResponse::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGSetResponse::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    obj->insert("ResponseTime", QJsonValue(response_time));

    toJsonValue(QString("Response"), response, obj, QString("QString"));

    return obj;
}

qint64
SWGSetResponse::getResponseTime() {
    return response_time;
}
void
SWGSetResponse::setResponseTime(qint64 response_time) {
    this->response_time = response_time;
}

QString*
SWGSetResponse::getResponse() {
    return response;
}
void
SWGSetResponse::setResponse(QString* response) {
    this->response = response;
}



} /* namespace Swagger */
