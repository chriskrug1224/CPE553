//done
#include <iostream>
using namespace std;

int main() {
	double d = 1.5152124151251;
	float f = (float) d;
	float f2 = float(d);
	//	Fraction f1(1,2);
	//	int i = int(f1);
  int a = 1000000;
  double* p;
  //  p = &a; // this doesn't work.the compiler knows I am being stupid
  p = (double*)&a;
  // new notation does not work for pointers: p = double*(&a)
	// [ a a a a ]
	//	     ^
  cout << *p << '\n';


  int i;
  float f1 = 3.14;
  // explicit casting: i=f; might give warning
  i= int(f1);
  cout << i << endl;
  //explicit casting:static_cast method
  i = static_cast <int> (f1);
  cout << i << endl;


  int i1 = 100000;
  int *p1;
  p1 = reinterpret_cast<int*> (&i1);
  cout << p1 << " " << *p1 << " " << &i1 << endl;


  const int i2=12;
  int *p2;
  //p = &i2; // gives error
  p2 = const_cast<int*>(&i2);
  cout << p2 << " " << *p2 << " "<< &i2 << endl;


}
