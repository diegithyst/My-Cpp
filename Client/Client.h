//
// Created by Mery on 03.03.2024.
//
#pragma once

#include <iostream>
#include <winsock2.h>
#include <ws2tcpip.h>
#include <windows.h>

using namespace std;


#pragma comment (lib, "Ws2_32.lib")
#pragma comment (lib, "Mswsock.lib")
#pragma comment (lib, "AdvApi32.lib")


class Client {
    public:
    Client();
    void serverConnect(int port);
    private:
    WSADATA wsadata;
    int wsaerr;
    WORD wVersionRequested = MAKEWORD(2,2);
};



