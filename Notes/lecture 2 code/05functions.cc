#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

inline double sq(double x) { return x*x; }
double  hypot(double a, double b) {
	return sqrt(a*a + b*b);
}

double dist(double x1, double y1, double x2, double y2) {
	return sqrt( sq(x1-x2) + sq(y1-y2));
}

double factorial(int n) {
	double prod = 1;
	for (int i = 1; i <= n; i++)
		prod *= i;
	return prod;
}


double choose(int n, int r) {
	return factorial(n) / (factorial(r) * factorial(n-r));
}

// 52 * 51 * 50 * 49 * 48 * 47 * 46 * 45 * 44 ...
//==================================================
// 6*5*4*3*2*1    46*45*44...
int main() {
	cout << setprecision(15) << setw(15);
	cout << hypot(3.0,4) << "\n";    //sqrt( )
    cout << factorial(5) << "\n";
	cout << factorial(50) << "\n";
	cout << factorial(60) << "\n";
	cout << factorial(100) << "\n";
	cout << choose(52, 6) << '\n'; // n! / (r! (n-r)!) this would work
	//cout << choose(1000, 6) << '\n'; // n! / (r! (n-r)!)  this will not work without cancellation

}

//Stream Manipulators are functions specifically designed to be used in conjunction with the insertion
//(<<) and extraction (>>) operators on stream objects

//setw
//This manipulator changes the width of the next input/output field.
//When used in an expression out << setw(n) or in >> setw(n), sets the width parameter of the stream out or in to exactly n.

//setprecision
//This manipulator changes floating-point precision.
//When used in an expression out << setprecision(n) or in >> setprecision(n), sets the precision parameter of the stream out or into exactly n.


//showpoint/noshowpoint
//This manipulator controls whether decimal point is always included in the floating-point representation.
