//
// Created by Mery on 03.03.2024.
//
#include "Client.h"
using namespace std;


#pragma comment (lib, "Ws2_32.lib")
#pragma comment (lib, "Mswsock.lib")
#pragma comment (lib, "AdvApi32.lib")

int main(){
    Client client{};
    client.serverConnect(8080);

    return 0;
}
