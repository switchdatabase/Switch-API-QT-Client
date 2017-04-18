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

/*
 * SWGList_order.h
 * 
 * 
 */

#ifndef SWGList_order_H_
#define SWGList_order_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGList_order: public SWGObject {
public:
    SWGList_order();
    SWGList_order(QString* json);
    virtual ~SWGList_order();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGList_order* fromJson(QString &jsonString);

    QString* getType();
    void setType(QString* type);

    QString* getBy();
    void setBy(QString* by);


private:
    QString* type;
    QString* by;
};

} /* namespace Swagger */

#endif /* SWGList_order_H_ */
