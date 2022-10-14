#include <iostream>
#include <cmath>
using namespace std;

//f(x) = 2x
// introduction to call by reference and call by pointer

int f(int x); // function prototype

void hello() {
	cout << "hello";
}

//old, ugly c style
//void hello(void) {
	//cout << "hello";
//}

//void f(int x) {
	//for ( ; x > 0; x--)
		//cout << "hello";
//}

inline double hypot(double x, double y) {
	return sqrt(x*x + y*y);
}

void rect2polar(double x, double y, double& r, double& theta) {
	r = hypot(x,y);
  theta = atan2(y, x);
}

void rect2polar(double x1, double y1, double* r, double* theta) {
	*r = hypot(x1,y1);
  *theta = atan2(y1, x1);
}
//*r = 5 , r1 = 5
//*theta=0.6, theta1=0.6
//polar2rect

int main() {
	cout << "Please enter x,y";
	double x, y;
	cin >> x >> y;
	cout << endl;
	double r1, theta1;

	rect2polar(x, y, r1, theta1); // calls the reference one
	cout << r1 << " " << theta1 << endl;
	rect2polar(x, y, &r1, &theta1); // calls the pointer one
	cout << r1 << " " << theta1 << endl;
}





