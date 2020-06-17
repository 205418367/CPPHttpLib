#include <httplib.h>
#include <iostream>
//#include <sstream>

using namespace httplib;
class HTTPlibClient{
public:
    HTTPlibClient();
    ~HTTPlibClient();
    bool uploadImage(const std::string &imgPath);
    bool uploadMessa(const std::string &TobeDeter);
};
