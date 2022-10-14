#include <iostream>
using namespace std;
// introduction to function overloading
// same function name - different in the following
// 1. input parameter
// 2. order of the input para
// 3. variable type of the input param

void f(int x) { cout << "int" << endl; }
//void f(float x) { cout << "float"; }
void f(double x) { cout << "double" <<endl; }
void f(const char* s) { cout << s <<endl; }
int main() {
	f(3);
	//	f(2L); error, ambiguous
	f(float(2L));
	f(1.5);
	f(1.2f);
}

// function overloading
