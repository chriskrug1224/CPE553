// operator overloading (+)
// constant function

#include <iostream>
using namespace std;

class Fraction {
private:
  int num, den;
public:
  Fraction(int n, int d) {
    num = n;
    den = d;
	}
  void print() const{ // this method is a READONLY method
		//num = 5;
		cout << num << '/' << den;
	}

	// right = b (righ.num , right.den)
	// a will give num and den
	Fraction add(Fraction right) const { // this method is a READONLY method
	    cout << "insdie add function" << endl;
		return Fraction(num*right.den + right.num*den, den*right.den);
	}

	// right is b (right.num , right.den)
	// a has num & den
	Fraction operator +(Fraction right) const { // this method is a READONLY method
	    cout << "insdie + function" << endl;
    return Fraction(num*right.den + right.num*den, den*right.den);
	}

};

int main() {
    const Fraction a(1,2); // 1/2
	a.print();
	cout << "\n\n\n";
	Fraction b(1,3); // 1/3
	b.print();
	cout << "\n\n\n";
	Fraction c(6,4); // 6/4
	//	Fraction d(6,0); // ??? Figure out what to do when someone puts in bad data
	// think about how to do this later?? Don't let object state become bad

	// a is the impl calling obj
	// b is external object
	// add - add function
	Fraction e = a.add(b);
	Fraction e2 = a + b;
	//	Fraction f = a * b;
	//	Fraction f2 = a + b * c; // precedence is the same
	//	Fraction g = -a;
	e.print();
	e2.print();

	// only 5 operators in C++ cannot be overridden  ?:, sizeof, ....
}

// 1   1    3+2    5
// - + -  = ---- = ---
// 2   3    6       6
// right.num = 1, righ.den= 3
// num*right.den + right.num*den = 1*3 + 2*1 = 5
