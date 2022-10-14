#include <iostream>
#include <cmath>
using namespace std;
// call by ref , pointer, value
void f(int x) {
	cout << x;
	cout << '\n';
	x++;
}

void g(int& x) {
	cout << x;
	cout << '\n';
	x++;
}

void h(int* p) {
  cout << p << ": " << *p << '\n';
  cout << '\n';
}

int main() {
	int x = 4;
	f(x); //4
	f(x); // 4
	g(x); // 4
	g(x); // 5
	f(x); //6
	f(x);//6
	h(&x); // 6



}

//review call by reference and call by value
