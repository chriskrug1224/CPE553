#include <iostream>
using namespace std;
// rules of arithmetic operations:
// 1) int / int = int
// 2) float/ int = float
// 3) priority of operations () - division/multiplication with precedence order - +/-
int main() {
	cout << 2/3 << '\n';
	cout << 2 + 3 * 4 << '\n';
	cout << 2 * 3 / 2 << '\n';
	cout << 2 / 3 * 3 << '\n';
	cout << (2.0/3) * 3 << '\n';//del
	cout << 2.0 / 3 * 3 << '\n'; //precedence and associatevity
	cout << 2 / 3 * 2.0 << '\n';// precedence and associatevity
}
