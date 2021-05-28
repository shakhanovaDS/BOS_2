#include <stdio.h>

extern char *environ;

int main(int argc, char *argv[]) {
	char **i;
	int count = 0;
	for(i = environ; *i != NULL; i++)
		count++;

	printf("Enviroment variables: %d\n",count,"Command line arguments: %d\n",argc);
	return 0;
}
