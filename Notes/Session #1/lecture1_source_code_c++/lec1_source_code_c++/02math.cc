#include <iostream>
#include <cstdint>
using namespace std;

// Math operations
// -ve number assigned to non-signed variable

int main() {
	uint32_t w = 2 + 2;
	int x = 2 - 5;
	uint32_t x2 = 2 - 5; // details are given below
	int y = 3 * 4;
	int z = 2 / 3; // 0
	int a = 2 % 3; // 2 MOD 3 = 2
	cout << w << ' ' << x << ' ' << x2 << ' ' << y << ' ' << z << ' ' << a << '\n';  //endl
	cout << 5 % 3 << 6 % 3 << 7 % 3 << 8 % 3 << '\n';  // % n  --> 0 to n-1
}

// 2-5= -3  -> 0000 0000 0000 0000 0000 0000 0000 0011
// 1's comp -> 1111 1111 1111 1111 1111 1111 1111 1100
// 2's comp -> 1111 1111 1111 1111 1111 1111 1111 1101
// convert  -> 4294967293
