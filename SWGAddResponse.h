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
 * SWGAddResponse.h
 * 
 * 
 */

#ifndef SWGAddResponse_H_
#define SWGAddResponse_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGAddResponse: public SWGObject {
public:
    SWGAddResponse();
    SWGAddResponse(QString* json);
    virtual ~SWGAddResponse();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGAddResponse* fromJson(QString &jsonString);

    qint64 getResponseTime();
    void setResponseTime(qint64 response_time);

    QString* getResponse();
    void setResponse(QString* response);

    QString* getListItemId();
    void setListItemId(QString* list_item_id);


private:
    qint64 response_time;
    QString* response;
    QString* list_item_id;
};

} /* namespace Swagger */

#endif /* SWGAddResponse_H_ */
