#include <stdio.h>
#include <stdlib.h>
int main () {
	while ("Please don't actually run this code!!") {
		malloc(0);
		printf("%s","Allocated Nothing\n");
	}
	return 0;
}
