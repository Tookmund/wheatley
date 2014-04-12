#include <iostream>
using namespace std;
int main () {
	bool bit = true;
	while (1) {
		if (bit == true) {
			bit = false;
			cout << "False\n";
		}
		else if (bit == false) {
			bit = true;
			cout << "True\n";
		} else {
			cout << "ERROR\n";
			return 0;
		}
	}
	return 0;
}
