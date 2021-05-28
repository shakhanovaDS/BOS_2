#include <stdio.h>

extern char *environ;

int main(int argc, char *argv[]) {
	char **i;
	int count = 0;
	for(i = environ; (*i != NULL && count < 10); i++) {
		printf("Enviroment variable №%d : %s\n",count,*i);
		count++;
	}
	return 0;
}
