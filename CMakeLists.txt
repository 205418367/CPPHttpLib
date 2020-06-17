cmake_minimum_required(VERSION 3.5)
project( cpp-httplib)
set(CMAKE_CXX_STANDARD 11)

set(DIR ${CMAKE_CURRENT_LIST_DIR})
include_directories(${DIR}/include ${DIR}/src)

add_executable(client src/testClient.cpp src/HttpClient.cpp)
target_link_libraries(client)

add_executable(server src/HttpServer.cpp src/testServer.cpp)
target_link_libraries(server -pthread)
