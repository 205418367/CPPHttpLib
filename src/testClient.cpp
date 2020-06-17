#include "HttpClient.h"

int main(){
    std::string imgPath = "sea.jpg";
    HTTPlibClient uploadClient;
    uploadClient.uploadImage(imgPath);
    return 0;
}
