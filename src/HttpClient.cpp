#include "HttpClient.h"

HTTPlibClient::HTTPlibClient(){}
HTTPlibClient::~HTTPlibClient(){}

bool HTTPlibClient::uploadImage(const std::string &imgPath){
    httplib::Client cli("39.98.87.95",8011);
    std::ifstream imgfile(imgPath);
    std::string content;
    std::ostringstream sin;
    sin << imgfile.rdbuf();
    content = sin.str();
    httplib::MultipartFormDataItems items = {
            { "status", "0", "", "" },
            { "type", "0", "", "" },
            { "deviceId", "123456", "", "" },
            { "alarmTime", "2020-05-19", "", "" },
            { "img", content, "YanHuo00509.jpg", "image/jpeg" },
    };
    auto res = cli.Post("/uploadImg",items);
    if (res) {
        std::cout << res->status << std::endl;
        std::cout << res->get_header_value("Content-Type") << std::endl;
        std::cout << res->body << std::endl;
        return true;
    }else{
        //LOGI("patch path:%s","*******");
        printf("patch path:%s","*******");
        return false;
    }
}

bool HTTPlibClient::uploadMessa(const std::string &TobeDeter){
    httplib::Client cli("39.98.87.95",8011);
    httplib::MultipartFormDataItems items = {
            { "status", "0", "", "" },
            { "type", "0", "", "" },
            { "deviceId", "123456", "", "" },
            { "alarmTime", "2020-05-19", "", "" },
    };
    auto res = cli.Post("/uploadImg",items);
    if (res) {
        return true;
    }else{
        return false;
    }
}
