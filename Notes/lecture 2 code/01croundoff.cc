#include <iostream>
#include <iomanip>
using namespace std;
// set precision for cout
int main() {
	cout << setprecision(15); //set precision is used to declare the precision in the next cout functions
	// we can optionally change the set precision to 2 or 3 or ...
	cout << "#######" << '\n';
	for (double x = 0; x <= 10; x = x + 0.1)
		cout << x << ' ';
	//cout << '\n';
}

/*
	1/1.0 + 1/2.0 + 1/3.0 + .. 1/100.0

  1/100.0 + 1/99.0 + ...    + 1/1.0


  1/(i*i)

  1.23
   .898
   .876


  1.23
  0.89
  ====
  2.12
  0.87
 =====
  2.99


 .898
 .876
 ====
1.774
1.23
====
3.00
 */
