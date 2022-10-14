//done
#include <iostream>
using namespace std;

int main() {
	int a = 2, b = 3;
	a++; // a = 3
	++a; // a = 4
	a = a + 1; // a = 5
	a += 1; // a = 6
	b--; // b = 2

	int c = a++; // c = 6 a = 7  int c = a; a++;
	c = ++a; // a = 8 c = 8

	//	int j = ++i + (k - 3) * ++m; // read that, sucker
    //	c = a++ + a++; // implementation defined: c = 16 or 17. or hard drive formatted?
	// similar:	c = ++a + ++a;

	cout << a << b  << endl;
	int d = b++ - --a; // a=7 d=2-7 = -5   b = 3
	cout << d << endl;

	int x; // uninitialized
	int y[10]; /// uninitializezd
	int arr[10] = {6, 9, 1}; // all the rest are 0
	int arr2[10] = {0}; /// initialize all elements to zero
	int i = 2, j = 1;
	arr[i++] += arr[j--]; // arr[i] += arr[j] // arr[2] = arr[2]+arr[1]= 1+ 9= 10 ->  arr[2] = 10 -> i=3 j = 0
	arr[++i] *= arr[j++]; // arr[4] = arr[4]* arr[0] = 0*6= 0   -> i=4 -> arr[i] *= 6 arr[4] = 0 -> i = 4 j=1

	int k = 2;
	int c1 = 2;
	int x1 = arr[i++] + arr[j--] *c1 + arr[k--]; // read that, sucker. // arr[5] + arr[1]*2 + arr[2] = 0 + 9*2 + 10 = 28-> i=5 j=0 k=1
	cout << x1 << endl;

}





