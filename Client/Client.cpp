
#include "Client.h"

Client::Client(){
    wsaerr = WSAStartup(wVersionRequested, &wsadata);
}

void Client::serverConnect(int port){
    if (wsaerr != 0) {
        std::cout << "The winsock dll not found" << std::endl;
        return;
    } else {
        cout << "The Winsock dll found" << endl;
        cout << "The status: " << wsadata.szSystemStatus << endl;
    }

    SOCKET clientSocket;
    clientSocket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);

    if(clientSocket == INVALID_SOCKET){
        cout<<"Error with client socket"<<endl;
        WSACleanup();
        return;
    }
    else{
        cout<<"Client socket success!"<<endl;
    }

    sockaddr_in clientService;
    clientService.sin_family = AF_INET;
    clientService.sin_addr.s_addr = inet_addr("127.0.0.1");
    clientService.sin_port = htons(port);
    if(connect(clientSocket, (SOCKADDR*)&clientService, sizeof(clientService)) == SOCKET_ERROR){
        cout<<"Filed to connect to server"<<endl;
        WSACleanup();
        return;
    }
    else{
        cout<<"Client connected!!!"<<endl;
    }

}