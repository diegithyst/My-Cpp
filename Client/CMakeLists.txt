cmake_minimum_required(VERSION 3.27)
project(Client)

set(CMAKE_CXX_STANDARD 17)

add_executable(Client startClient.cpp
        Client.h
        Client.cpp)

if(MINGW)
    target_link_libraries(Client ws2_32)
endif()