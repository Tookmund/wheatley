#include <stdio.h>
int main () {
	int bit = 1;
	while (1) {
		if (bit == 1) {
			bit = 0;
			printf("%s","False\n");
		}
		else if (bit == 0) {
			bit = 1;
			printf("%s", "True\n");
		} else {
			printf("%s","ERROR\n");
			return 0;
		}
	}
	return 0;
}
