// function overloading
// null pointer

#include <iostream>
using namespace std;
void f(int x) { cout << "int" << endl; }
void f(const char* s) { cout << s <<endl; }
int main() {
	f("hello");
	f(3);
	int* p = NULL;
	p = 0;
	f(0); // ambiguous because 0 is null OR zero
	p = nullptr; // since c++11
}
// passing constant of pointer that point to char to function
// function overloading
