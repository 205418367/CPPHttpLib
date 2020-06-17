#include <cstdio>
#include <httplib.h>
#include <iostream>

using namespace httplib;
class HTTPlibServer{
public:
    HTTPlibServer();
    ~HTTPlibServer();
    int recvMse(); 
private:
    Server svr;
};
