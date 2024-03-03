#include "Server.h"

Server::Server(int portt) {
    port = portt;
    wsaerr = WSAStartup(wVersionRequested, &wsadata);
}

int Server::getPort(){
    return port;
}


void Server::start() {
    if(wsaerr!=0){
        cout<<"Winsock dll not found"<<endl;
        return;
    }else{
        cout<<"Winsock found!!"<<endl;
    }

    SOCKET serverSocket;
    serverSocket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);

    sockaddr_in service;
    service.sin_family = AF_INET;
    service.sin_addr.s_addr = inet_addr("127.0.0.1");
    service.sin_port = htons(port);

    if(bind(serverSocket, reinterpret_cast<SOCKADDR*>(&service), sizeof(service)) == SOCKET_ERROR){
        cout<<"bind filed :<"<<endl;
        WSACleanup();
        return;
    }
    else{
        cout<<"bind worked! Hell yeah!!"<<endl;
    }

    if(listen(serverSocket, 1)== SOCKET_ERROR) {
        cout<<"error listening"<<endl;
    }
    else{
        cout<<"Waiting for connections!!" <<endl;
    }

    SOCKET acceptedSocket;
    acceptedSocket = accept(serverSocket, nullptr, nullptr);

    if(acceptedSocket == INVALID_SOCKET){
        cout<<"accepting filed"<<endl;
        WSACleanup();
        return;
    }
    else{
        cout<<"Accepted!!!"<<endl;
    }
}

