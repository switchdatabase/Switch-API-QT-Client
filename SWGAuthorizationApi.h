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

#ifndef _SWG_SWGAuthorizationApi_H_
#define _SWG_SWGAuthorizationApi_H_

#include "SWGHttpRequest.h"

#include <QString>
#include "SWGError.h"

#include <QObject>

namespace Swagger {

class SWGAuthorizationApi: public QObject {
    Q_OBJECT

public:
    SWGAuthorizationApi();
    SWGAuthorizationApi(QString host, QString basePath);
    ~SWGAuthorizationApi();

    QString host;
    QString basePath;

    void tokenGet(QString* api_key, QString* signature, qint64 expire);
    
private:
    void tokenGetCallback (HttpRequestWorker * worker);
    
signals:
    void tokenGetSignal(QString* summary);
    
};
}
#endif
