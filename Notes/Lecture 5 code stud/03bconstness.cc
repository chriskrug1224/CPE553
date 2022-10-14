//done
#include <iostream>
using namespace std;

int main() {
	int a = 2;
	const int*p = &a; // p is a READONLY pointer
	cout << *p << endl;
	a = 3; // a can change
	cout << *p << '\n';
	//*p = *p +1; // error p is a READONLY pointer
	//cout << (*p)++ << '\n'; // error p is a READONLY pointer - it will print 3
    cout << p << '\n';
    p=p+2;
    cout << p << '\n';

	const int b = 3;
 	//int * q = &b;  // illegal error b is constant int
	//	*q = 2;
	int*q = (int*)&b;
	*q = 2;
	cout << b << '\n';

	const double pi = 3.14159265358979;
	double *dp = (double*)&pi;
	*dp = 4;
	cout << &pi << '\n';
	cout << dp << '\n';
	cout << *dp << '\n';
}
