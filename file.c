#include <stdio.h>
#include <errno.h>
void complete(char *message) {
	printf("Error number %d\n", errno);
        exit(1);
}
