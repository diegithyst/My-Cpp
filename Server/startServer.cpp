#include "Server.h"
using namespace std;


#pragma comment (lib, "Ws2_32.lib")
#pragma comment (lib, "Mswsock.lib")
#pragma comment (lib, "AdvApi32.lib")


int main(){
    Server server{
        8080
    };

    cout<<"Server port:" << server.getPort()<< endl;
    server.start();

    return 0;
}