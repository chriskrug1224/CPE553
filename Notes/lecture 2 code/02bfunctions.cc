#include <iostream>
using namespace std;
// FUNCTION f may be overloaded as long as each function has a different signature
void f() {
	cout << "hello" << '\n';
}

inline double f(double x) {
 	return x*1.7;
}

int f(int x) {
	return x*x;
}

int main() {
	f(); // call 1st f
	cout << f(2.5) << "\n"; // call second f - return 4.25
	cout << f(2) << "\n"; // call third f - return 4

	cout << f('a') << '\n'; // call third f - return a-97-> 97*97
	cout << f(2.5f) << '\n'; // call second f- return 4.25
//error:	f("hello"); // error

}




