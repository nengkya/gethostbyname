#include <arpa/inet.h>
#include <stdlib.h>
#include <netdb.h>

char * dns_lookup(char * a, struct sockaddr_in * addr_con) {

struct hostent * host_entity;
char * ip = (char *) malloc(NI_MAXHOST * sizeof(short));


}


int main(int argc, char * argv[]) {

int sockfd;
char * ip_addr;
struct sockaddr_in * addr_con;

if (argc!=2) {
}

ip_addr=dns_lookup(argv[1], addr_con);

}
