#include <iostream>
using namespace std;
int main () {
	bool bit = true;
	while (1) {
		if (bit == true) {
			bit = false;
			cout << "False";
		}
		else if (bit == false) {
			bit = true;
			cout << "True";
		} else {
			cout << "ERROR";
			return 0;
		}
	}
	return 0;
}
