#include <stdio.h>

struct sayur {

	char ** cabe;

};


int main() {

	struct sayur sayur1;
	char * p="aaaa";
	sayur1.cabe=&p;

	printf("%s",p);


}
