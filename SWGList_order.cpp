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


#include "SWGList_order.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGList_order::SWGList_order(QString* json) {
    init();
    this->fromJson(*json);
}

SWGList_order::SWGList_order() {
    init();
}

SWGList_order::~SWGList_order() {
    this->cleanup();
}

void
SWGList_order::init() {
    type = new QString("");
    by = new QString("");
}

void
SWGList_order::cleanup() {
    
    if(type != nullptr) {
        delete type;
    }

    if(by != nullptr) {
        delete by;
    }
}

SWGList_order*
SWGList_order::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGList_order::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&type, pJson["type"], "QString", "QString");
    ::Swagger::setValue(&by, pJson["by"], "QString", "QString");
}

QString
SWGList_order::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGList_order::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    toJsonValue(QString("type"), type, obj, QString("QString"));

    toJsonValue(QString("by"), by, obj, QString("QString"));

    return obj;
}

QString*
SWGList_order::getType() {
    return type;
}
void
SWGList_order::setType(QString* type) {
    this->type = type;
}

QString*
SWGList_order::getBy() {
    return by;
}
void
SWGList_order::setBy(QString* by) {
    this->by = by;
}



} /* namespace Swagger */

