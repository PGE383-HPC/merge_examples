#include <stdio.h>
#include <errno.h>
int quit(char *message) {
	printf("Error number %d\n", errno);
        exit;
}
