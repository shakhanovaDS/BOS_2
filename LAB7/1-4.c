#include <stdio.h>

extern char *environ;

int main(int argc, char *argv[]) {
	char **i;
	int count = 0;

	if(argc < 2) return 0;

	int n = atoi(argv[1]);

	if(n <= 0) return 0;

	printf("Printing %d arguments\n",n);

	for(i = environ; (*i != NULL && count < n); i++) {
		printf("Enviroment variable №%d : %s\n",count,*i);
		count++;
	}
	return 0;
}
