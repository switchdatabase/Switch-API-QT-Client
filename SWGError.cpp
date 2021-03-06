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


#include "SWGError.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGError::SWGError(QString* json) {
    init();
    this->fromJson(*json);
}

SWGError::SWGError() {
    init();
}

SWGError::~SWGError() {
    this->cleanup();
}

void
SWGError::init() {
    response_time = 0L;
    response = new QString("");
    error_message = new QString("");
}

void
SWGError::cleanup() {
    

    if(response != nullptr) {
        delete response;
    }

    if(error_message != nullptr) {
        delete error_message;
    }
}

SWGError*
SWGError::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGError::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&response_time, pJson["ResponseTime"], "qint64", "");
    ::Swagger::setValue(&response, pJson["Response"], "QString", "QString");
    ::Swagger::setValue(&error_message, pJson["ErrorMessage"], "QString", "QString");
}

QString
SWGError::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGError::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    obj->insert("ResponseTime", QJsonValue(response_time));

    toJsonValue(QString("Response"), response, obj, QString("QString"));

    toJsonValue(QString("ErrorMessage"), error_message, obj, QString("QString"));

    return obj;
}

qint64
SWGError::getResponseTime() {
    return response_time;
}
void
SWGError::setResponseTime(qint64 response_time) {
    this->response_time = response_time;
}

QString*
SWGError::getResponse() {
    return response;
}
void
SWGError::setResponse(QString* response) {
    this->response = response;
}

QString*
SWGError::getErrorMessage() {
    return error_message;
}
void
SWGError::setErrorMessage(QString* error_message) {
    this->error_message = error_message;
}



} /* namespace Swagger */

