#include <iostream>
#include <cmath>  // double sin(double), double cos(double)
using namespace std;

constexpr double PI = 3.14159265358979;

double f(double x) {
    cout << "inside f function " << x << " " << x*x << endl;
    return x*x; }
//x*x*x/3
typedef double (*FuncOneVar)(double);

double integrate(FuncOneVar f, double a, double b) {
    cout << "value of f = "<< f << endl;
    cout << "+++++" << endl;
	double ya = f(a), yb = f(b);
	cout << a << " "<< b << endl; // 0 2 // 0 6.28319
	cout << ya << " "<< yb << endl; // 0 4 // 0
	double mid = (a + b) / 2;
	cout << mid << endl; //1 // 3.14159
	double ymid = f(mid);
	cout << ymid << endl;//1
	return (0.5*(ya + yb) + ymid)* (b-a); // (0.5 * (0+4) + 1) * (2-0) = 6
}
	//double integrate(double (*f)(double), double a, double b, eps) {
int main() {
	cout <<	integrate(f, 0.0, 2.0) << '\n';; // 8/3 - 0
	cout << "+++++" << endl;
	cout <<	integrate(sin, 0.0, 2.0*PI)<< '\n';; // 8/3 - 0
	cout << sin (0) << " " << sin(6.28319) << '\n';
}
