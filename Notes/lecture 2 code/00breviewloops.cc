#include <iostream>
using namespace std;
// for loop & constant var -
int main() {
	for (int i = 3; i <= 23; i += 2)
	  cout << i; //357911131517192123
	cout << '\n';

	for (int i = 3; i <= 42; i *= 2)
	  cout << i; //361224
	cout << '\n';

/*#if 0
	for (uint16_t i = 0; i < 100000; i++)
		cout << i;
	cout << '\n';
#endif*/

	for (int i = 0; i > 10; i++)
		cout << i; // nothing printed
	cout << '\n';
	cout << "##########";
	for (int i = 10; i < 10; i--)
		cout << i;
	cout << '\n';
	cout << "##########" << endl;

/*#if 0
	for (int i = 100; i > 0; i = i / 3 + 1)
		cout << i;
	cout << '\n';
#endif*/

	for (int i = 0, j = 23; i < 10; i++, j--)
		cout << j << " "; // 23 22 21 20 19 18 17 16 15 14
	cout << '\n';

    double a = 3.0, b = 5.0;
	double x = a;
	const int n = 600;
	float dx = (b - a) / n; //0.00333333
	cout << dx << endl;
	for (int i = 0; i <= n; i++, x += dx)
		cout << x << ' '; // 3 3.00333 3.00667 3.01 3.01333 3.01667 3.02 3.02333 3.02667 3.03 3.03333 3.03667 3.04 3.04333 3.04667 3.05 3.05333
	cout << '\n';

	// this way is NOT GOOD. It will miss the last number
	cout << "#######" << endl;
	cout << x << "  " <<b;
	/*for (double x = a; x <= b; x += dx)
	  cout << x << ' ';
	cout << '\n';*/

}



