//initial array
//reverse array function - condition is size/2  (use of temp variable)

#include <iostream>
using namespace std;

void init(int x[], uint32_t len) {
  for (int i = 0; i < len; i++)
		x[i] = i;
}
//print array
void print(const int x[], uint32_t len) {
	for (int i = 0; i < len; i++)
		cout << x[i] << ' ';
	cout << '\n';
}

//reverse the
// 9 1 2 3 4 5 6 7 8 0  -->  9 8 7 6 5 4 3 2 1 0
void reverse(int x[], uint32_t len) {
	for (int i = 0; i < len/2; i++) {
		int temp = x[i];
		x[i] = x[len-1-i];
		x[len-1-i] = temp;
	}
}

int main() {
	int a[10];
	cout << sizeof(a)/sizeof(int) << sizeof(a) << sizeof(int)<< endl;
	init(a, sizeof(a)/sizeof(int));
	print(a, 10);
	a[5] = 23;
	print(a, 10);
	cout << "******" << endl;
	const int SIZE = 5;
	int b[SIZE];
	init(b, SIZE);
	print(b, SIZE);
	reverse(b, SIZE);
	print(b, SIZE);
}

//initial array
//print array
//reverse array
