#include <stdio.h>
#include <netdb.h>

int main() {

	struct hostent * hostEntity;
	char * namaHost;

	hostEntity=gethostbyname("www.google.com");

	namaHost=(char *)hostEntity->h_aliases;

	printf("%s\n", namaHost);

}
