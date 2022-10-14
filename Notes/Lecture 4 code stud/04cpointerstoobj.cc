#include <iostream>
using namespace std;
class Thingy {
public:
	int x;
	double y;
};

int main() {
	int a = 2;
	int * p = &a; // p points to a

	*p = 5; // a = 5

	Thingy t = {5, 2.2};
	Thingy* s = &t;
	s->x = 3;
    cout << s->x << endl;
	(*s).x = 4; // same as ->
	cout << (*s).x << endl;
}

// define class
// define pointer that point to object of the class
// access attributes inside object using arrow notation and using dot . notation
