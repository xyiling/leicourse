#include "client.h"

void client()
{
    int socketFd = socket(AF_INET, SOCK_STREAM, 0);
    sockaddr_in server_addr = {};
    server_addr.sin_addr.s_addr = 0x6800a8c0;
    server_addr.sin_family = AF_INET;
    server_addr.sin_port = 0xbeaf;
    int connction = connect(socketFd, (sockaddr*)&server_addr, sizeof(server_addr));
    const char* str = "hello world";
    int n = send(connction, str, sizeof(str) + 1, 0);
    printf("%d\n", n);
}