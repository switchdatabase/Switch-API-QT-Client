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


#include "SWGAddResponse.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGAddResponse::SWGAddResponse(QString* json) {
    init();
    this->fromJson(*json);
}

SWGAddResponse::SWGAddResponse() {
    init();
}

SWGAddResponse::~SWGAddResponse() {
    this->cleanup();
}

void
SWGAddResponse::init() {
    response_time = 0L;
    response = new QString("");
    list_item_id = new QString("");
}

void
SWGAddResponse::cleanup() {
    

    if(response != nullptr) {
        delete response;
    }

    if(list_item_id != nullptr) {
        delete list_item_id;
    }
}

SWGAddResponse*
SWGAddResponse::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGAddResponse::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&response_time, pJson["ResponseTime"], "qint64", "");
    ::Swagger::setValue(&response, pJson["Response"], "QString", "QString");
    ::Swagger::setValue(&list_item_id, pJson["ListItemId"], "QString", "QString");
}

QString
SWGAddResponse::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGAddResponse::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    obj->insert("ResponseTime", QJsonValue(response_time));

    toJsonValue(QString("Response"), response, obj, QString("QString"));

    toJsonValue(QString("ListItemId"), list_item_id, obj, QString("QString"));

    return obj;
}

qint64
SWGAddResponse::getResponseTime() {
    return response_time;
}
void
SWGAddResponse::setResponseTime(qint64 response_time) {
    this->response_time = response_time;
}

QString*
SWGAddResponse::getResponse() {
    return response;
}
void
SWGAddResponse::setResponse(QString* response) {
    this->response = response;
}

QString*
SWGAddResponse::getListItemId() {
    return list_item_id;
}
void
SWGAddResponse::setListItemId(QString* list_item_id) {
    this->list_item_id = list_item_id;
}



} /* namespace Swagger */
