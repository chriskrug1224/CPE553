#include  <iostream>
#include <cmath>
using namespace std;

int main() {
	double a = 3 + 1 / 2;//3
	double b = a * 1.5; //4.5
	int c = 4.6 * 3; //13
	int d = 2 / 3.0 * 3;//2
	int d2 = 2 / 3 * 3;//0
	int	e = (int)b * 3;//12
	int f = (int)(b * 3);//13
	int g = int(b * 3);//13
	int h = round(b*3);//14
	int i = floor(b*3);//13
	int j = ceil(b*3);//14
    int k = 3 + 1.0 / 2 * 4 - 6; //-1

	cout << "a=" << a << '\n';
	cout << "b=" << b << '\n';
	cout << "c=" << c << '\n';
	cout << "d=" << d << '\n';
	cout << "d2=" << d2 << '\n';
	cout << "e=" << e << '\n';
	cout << "f=" << f << '\n';
	cout << "g=" << g << '\n';
	cout << "h=" << h << '\n';
	cout << "i=" << i << '\n';
	cout << "j=" << j << '\n';
	cout << "k=" << k << '\n';
}
