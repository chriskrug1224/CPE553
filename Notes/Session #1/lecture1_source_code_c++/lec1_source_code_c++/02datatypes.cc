#include <iostream>
#include <cstdint>
using namespace std;
// variables data types definition and initialization
// over flow
int main() {
	char e = 'a'; // 1 byte (usually)    sizeof(char) == 1
	short d = 1; // >= 2 bytes (16 bits) <= int
	int a = 1; //  4 bytes  signed or unsigned???
	signed int sa;
	unsigned int ua;
	long b = 1234567890; // short <= int <= long <= long long
	cout << b << '\n';
    cout << "sizeof(b)=" << sizeof(b) << '\n';
    long long c = 124112412151241241LL; //
	cout << c << '\n';
	cout << "sizeof(c)=" << sizeof(c) << '\n';
	c = 1234567890 + 1234567890;
	cout << c << '\n';
	uint32_t x;
	uint64_t y;
	//	uint8_t uint16_t uint32_t uint64_t
	// int8_t  int16_t  int32_t int64_t

	// nonstandard, gnu
	// _int128

}
