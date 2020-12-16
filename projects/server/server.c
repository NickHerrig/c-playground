/* 
server.c -- a minimal hello world webserver written in C
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <sys/socket.h>
#include <unistd.h>
#include <arpa/inet.h>


int main(void)
{
    struct addrinfo hints, *servinfo, *p;
    int sockfd, new_fd;
    int yes=1;
    struct sockaddr_storage their_addr;
    socklen_t sin_size;
    int rv;

    memset(&hints, 0, sizeof hints);
    hints.ai_family = AF_UNSPEC;
    hints.ai_socktype = SOCK_STREAM;
    hints.ai_flags = AI_PASSIVE;

    if ((rv = getaddrinfo(NULL, "8080", &hints, &servinfo)) != 0) {
        fprintf(stderr, "getaddrinfo: %s\n", gai_strerror(rv));
        exit(1);
    }

    for(p = servinfo; p != NULL; p = p->ai_next) {
        if ((sockfd = socket(p->ai_family, p->ai_socktype, p->ai_protocol)) == -1) {
            perror("server: socket");
            continue;
        }
    
        if (setsockopt(sockfd, SOL_SOCKET, SO_REUSEADDR, &yes, sizeof(int)) == -1) {
            perror("server: socket options");
            exit(1);
        }

        if ((bind(sockfd, p->ai_addr, p->ai_addrlen)) == -1) {
            close(sockfd);
            perror("server: bind");
            continue;
        }
        
        break;
    }

    freeaddrinfo(servinfo);

    if (listen(sockfd, 20) == -1) {
        perror("server: listen");
        exit(1);
    }

    printf("server running and waiting for connections...\n");
    
    while(1) {
        sin_size = sizeof their_addr;
        new_fd = accept(sockfd, (struct sockaddr *)&their_addr, &sin_size);
        if (new_fd == -1) {
            perror("accept");
            continue;
        }
   
        printf("server: recieved connection from client..\n");

        char *res = "HTTP/1.1 200 OK\r\nContent-Length: 14\r\n\r\nHello, world!\n";
        if (send(new_fd, res, strlen(res), 0) == -1) {
            perror("send");
        }
        close(new_fd);
    }
    return 0;
}
