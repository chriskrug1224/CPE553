#include <iostream>
using namespace std;
/*
	terms: class, object, method, message

 */
 // introduction to class and objects
// define constructor
// define constructors with overloading feature

class Fraction {
public:
	int num, den;
public:
	Fraction(int n, int d) : num(n), den(d) { cout << "inside constructor 1" << endl;// constructor
	} // use the initializer list syntax : num(n), ... better than assignment

	Fraction(int n) { cout << "inside constructor 2" << endl; // constructor
		num = n;
		den = 1;
 	}

	Fraction() : num(0), den(1) {cout << "inside constructor 3" << endl;
	}
};

int main() {
  Fraction a(1,2);	 //  1/2
  Fraction b(3);	 //  3/1
	// THIS IS NOT AN OBJECT!: Fraction c();
	Fraction c; // calls Fraction::Fraction()

}

// class defintion
// methods and attributes
// constructors
