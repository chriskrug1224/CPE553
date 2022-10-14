
// =======
// Agenda:
// =======
// 1- array declaration
//    --. index = 0 to size-1
// ** array name is pointer to the first array element
// 2- array initialization --. for loop
// 3- array usage
// 4- reading and writing array elements
// 5- reading and writing character array
// 6- pointer array assignment
// 7- for loops
//    --. step, condition and initialization
//    --. cout << i; after the loop
// 8- constant variables
//    --. declaration and initialization in the same line
//    --. constant variable can be initialized (once in the declr. line) but can't be changed

#include <iostream>
using namespace std;

int main()
{
	// array declaration
	const int n = 4;
	int A[n];

	// array initialization
	A[0] = 0;
	A[1] = 2;
	A[2] = 4;
	A[3] = 6;
	//cout << A[4] << endl;

	// array declaration and initialization in the same line
	int B[] = {1,4,7};
	//int B[3] = {1,4,7};

	// reading array elements --> for loops
	cout << "Please enter 4 array elements: ";
	int i;
	for (i = 0; i < 4; i++)
	{
		cin >> A[i];
	}
	cout << i << endl;

	// writing array elements
	cout << "Printing the array elements: ";
	for (int i = 0; i < 4; i++)
	{
		cout << A[i] << " ";
	}
	cout << endl;

	// declaration char array
	char firstname[100];

	// reading and writing from char array
	cout << "Please enter your name (with no spaces)." << endl;

	cin >> firstname;

	cout << "\nYour name is " << firstname << endl;

	// pointer array assignment
	int* p;
	p = A;

	cout << "before p[0] = 100; A[0] = " << A[0] << endl;

	p[0] = 100;

	cout << "after p[0] = 100; A[0] = " << A[0] << endl;

	int x = 5;
	int * q = &x;
	// A = q; // --> error because A is a const pointer

	char c;
	cin >> c;
}
