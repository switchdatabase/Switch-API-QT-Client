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


#include "SWGWhereItem.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {


SWGWhereItem::SWGWhereItem(QString* json) {
    init();
    this->fromJson(*json);
}

SWGWhereItem::SWGWhereItem() {
    init();
}

SWGWhereItem::~SWGWhereItem() {
    this->cleanup();
}

void
SWGWhereItem::init() {
    type = new QString("");
    column = new QString("");
    value = new QString("");
}

void
SWGWhereItem::cleanup() {
    
    if(type != nullptr) {
        delete type;
    }

    if(column != nullptr) {
        delete column;
    }

    if(value != nullptr) {
        delete value;
    }
}

SWGWhereItem*
SWGWhereItem::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGWhereItem::fromJsonObject(QJsonObject &pJson) {
    ::Swagger::setValue(&type, pJson["type"], "QString", "QString");
    ::Swagger::setValue(&column, pJson["column"], "QString", "QString");
    ::Swagger::setValue(&value, pJson["value"], "QString", "QString");
}

QString
SWGWhereItem::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGWhereItem::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    toJsonValue(QString("type"), type, obj, QString("QString"));

    toJsonValue(QString("column"), column, obj, QString("QString"));

    toJsonValue(QString("value"), value, obj, QString("QString"));

    return obj;
}

QString*
SWGWhereItem::getType() {
    return type;
}
void
SWGWhereItem::setType(QString* type) {
    this->type = type;
}

QString*
SWGWhereItem::getColumn() {
    return column;
}
void
SWGWhereItem::setColumn(QString* column) {
    this->column = column;
}

QString*
SWGWhereItem::getValue() {
    return value;
}
void
SWGWhereItem::setValue(QString* value) {
    this->value = value;
}



} /* namespace Swagger */

