// operator overloading (+) & operator <<
// constant function
// friend function
// unary operator

#include <iostream>
using namespace std;
//skip
class Fraction {
private:
  int num, den;
public: // this is what everyone in the program can see
  Fraction(int num, int den) : num(num), den(den) {}

  // how to write unary member operator
  Fraction operator -() const {
      cout << "inside -()" << endl;
      return Fraction(-num, den);
  }
#if 0
// can only write either member function or friend, not both

  //how to write unary friend operator
  friend Fraction operator -(Fraction a) const {
      return Fraction(-a.num, a.den);
  }
#endif

  friend Fraction operator +(Fraction a, Fraction b) { // friend does not have this, so NO CONST
    cout << "inside + ostream" << endl;
    return Fraction(a.num*b.den + b.num*a.den, a.den * b.den);//calling constructor creates unnamed variable
  }

  friend ostream& operator <<(ostream& s, const Fraction& f) {
    cout << "inside << ostream" << endl;
    return s << f.num << "/" << f.den;
  }
}; //end of the class



int main() {
  const Fraction a(1,2); // 1/2
  const Fraction b(1,3); // 1/3
  const Fraction c = a + b; // a.operator+(b)
  const Fraction d = -a;
  cout << c << '\n';
  cout << d << '\n';
}
//overloading operator -
