#include <iostream>
using namespace std;

int main() {
    int a = -1; // usually signed not guaranteed
	cout << sizeof(int) << '\n';
	unsigned int b = 2U;
	signed int c = -2;
	long int d = 123456789012345678L;
	cout << sizeof(d) << '\n';
	long long int e = 123456789012345678LL;
	cout << sizeof(e) << '\n';
    short int f = 123;
	char g = 1; // char is one atomic memory unit (most computers, byte)
	cout << sizeof(char) << '\n';

	int8_t x1; // signed 1 byte -128 to 127
	uint8_t y1; // unsigned 1 byte 0 to 255

	int16_t x2; // signed 2 byte -32,768 to 32,768
	uint16_t y2; // unsigned 2 byte 0 to 65,535

	int32_t x3; // signed 4 bytes -2,147,483,648 to 2,147,483,647
	uint32_t y3; // unsigned 4 bytes 0 to 4,294,967,295

	int64_t x4; // signed 8 bytes -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807
	uint64_t y4; // unsigned 8 bytes 0 to 18,446,744,073,709,551,615
}
