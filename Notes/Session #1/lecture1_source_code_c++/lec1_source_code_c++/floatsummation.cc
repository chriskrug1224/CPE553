#include <iostream>
using namespace std;
// problem on for loop and float/int = float
// priority is given to division
int main() {
	float sum = 0;
	for (float i = 1; i < 10; i++) {
		sum = sum + 1.0 / i;
		cout << sum << '\n';
	}
}

