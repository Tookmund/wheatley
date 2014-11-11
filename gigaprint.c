/* Warning! This program sucks 4GB of memory! */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define GIGA ((1024LL)*((1204LL)*(1024LL)))

int main () {
	srand(time(NULL));
	int* giga = (int*)malloc(sizeof(int)*GIGA);
	long long i;
	for (i = 0; i < GIGA; i++) {
		giga[i] = rand();
	}
	giga[GIGA-1] = 0;
	for(i = 0;i < GIGA; i++) {
		printf("%d",giga[i]);
	}
	exit(EXIT_SUCCESS);
}
