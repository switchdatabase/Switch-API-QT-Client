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

#include "SWGAuthorizationApi.h"
#include "SWGHelpers.h"
#include "SWGModelFactory.h"

#include <QJsonArray>
#include <QJsonDocument>

namespace Swagger {
SWGAuthorizationApi::SWGAuthorizationApi() {}

SWGAuthorizationApi::~SWGAuthorizationApi() {}

SWGAuthorizationApi::SWGAuthorizationApi(QString host, QString basePath) {
    this->host = host;
    this->basePath = basePath;
}

void
SWGAuthorizationApi::tokenGet(QString* api_key, QString* signature, qint64 expire) {
    QString fullPath;
    fullPath.append(this->host).append(this->basePath).append("/Token");



    HttpRequestWorker *worker = new HttpRequestWorker();
    HttpRequestInput input(fullPath, "GET");

    


    // TODO: add header support
    // TODO: add header support
    // TODO: add header support

    connect(worker,
            &HttpRequestWorker::on_execution_finished,
            this,
            &SWGAuthorizationApi::tokenGetCallback);

    worker->execute(&input);
}

void
SWGAuthorizationApi::tokenGetCallback(HttpRequestWorker * worker) {
    QString msg;
    if (worker->error_type == QNetworkReply::NoError) {
        msg = QString("Success! %1 bytes").arg(worker->response.length());
    }
    else {
        msg = "Error: " + worker->error_str;
    }

    
        QString json(worker->response);
    QString* output = static_cast<QString*>(create(json, QString("QString")));
    

    worker->deleteLater();

    emit tokenGetSignal(output);
    
}
} /* namespace Swagger */
