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
 * SWGError.h
 * 
 * 
 */

#ifndef SWGError_H_
#define SWGError_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGError: public SWGObject {
public:
    SWGError();
    SWGError(QString* json);
    virtual ~SWGError();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGError* fromJson(QString &jsonString);

    qint64 getResponseTime();
    void setResponseTime(qint64 response_time);

    QString* getResponse();
    void setResponse(QString* response);

    QString* getErrorMessage();
    void setErrorMessage(QString* error_message);


private:
    qint64 response_time;
    QString* response;
    QString* error_message;
};

} /* namespace Swagger */

#endif /* SWGError_H_ */
