#include <iostream>
using namespace std;

/*
  421
	000 = 0
	001 = 1
	010 = 2
	011 = 3
	100 = 4
	101 = 5
	110 = 6
	111 = 7
    1
=====
 1000

  -21
	000 = 0
	001 = 1
	010 = 2
	011 = 3
	100 = -4
	101 = -3
	110 = -2
	111 = -1


 */

int main() {
	//cout<< sizeof(int)<<'\n';
	//cout <<4461*4461*4461;
	cout << 7 * 24 * 60 * 60 << '\n';
	cout << 365 * 24 * 60 * 60 << '\n';
	//31,536,000
	// 1111 0000 1001 1001 1100 00000
	cout << 68 * 365 * 24 * 60 * 60 << '\n';
	// 2,144,448,000
	// 1111 1111 1010 0011 0101 1100 0000 000
	// 2144448000
	cout << 69 * 365 * 24 * 60 * 60 << '\n'; //needs more understanding - cleared
	// 2,175,984,000
	// 1000 0001 1011 0010 1110 0001 1000 0000 -> MSB 1 (neg number)
	// -2118983296 -> 2's complement

	int age = 138;
	cout << age * 365 * 24 * 60 * 60 << '\n';
	// 4,351,968,000 -> 1 0000 0011 0110 0101 1100 0011 0000 0000
	// 1 ignored MSB due to overflow
	// 0000 0011 0110 0101 1100 0011 0000 0000 -> 57000704
	//type promotion: when two types are different, promote the smaller
	// 3 + 2L
	// solution to the above problem:

	cout << sizeof(365LL) << '\n';
    uint64_t secondsInAge = age * 365LL * 24 * 60 * 60; //needs more understanding - multiplication with LL makes the outcomes of multiplication is LL i.e no over flow
	cout << secondsInAge << '\n';
	//4351968000

	// long long variable data type can be used to carry large numbers
}
