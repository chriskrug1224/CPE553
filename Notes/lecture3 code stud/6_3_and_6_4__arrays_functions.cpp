
// *** [After-Class Exercise] ***
//    1- Fn. to get average of an array ---> DO IT NOW :D
//    2- Fn. to put zero in place of the odd or negative elements of an array ---> DO IT NOW :D


// Examples:
// 1- Search
// 2- PrintReverse
// 3- ReplaceAll

#include <iostream>
using namespace std;

// Search Function //
// 1- inputs: array, key
// 2- outputs: bool
// 3- prototype:
int Search(int * arr, int n, int key); // an example of a function that:
                                       // - does NOT change array elements arr[i] for any i (just read use them)

// PrintReverse Function //
// 1- inputs: array
// 2- outputs: not autput just prining
// 3- prototype:
void PrintReverse(int * A, int n);  // an example of a function that:
                                    // - does NOT change array elements arr[i] for any i (just read print them)


// ReplaceAll Function //
// 1- inputs: array, old, new
// 2- outputs: bool, array elements may change
// 3- prototype:
bool ReplaceAll(int* A, int size, int old_val, int new_val);  // an example of a function that:
                                                              // - may change array elements arr[i] for some i

// print function
void PrintArray(int * arr, int n);  // an example of a function that:
                                    // - does NOT change array elements arr[i] for any i (just read print them)

// read function
void ReadArray(int* arr, int n); // an example of a function that:
                                 // - changes array elements arr[i]

int main()
{

	// array declaration
	const int n = 4;
	int A[n];

	// reading array elements --> for loops
	ReadArray(A, n);

	// writing array elements
	PrintArray(A, n);

	int key;
	cout << "Please enter a number for searching:";
	cin >> key;

	// calling Search function
	// TODO
	int loc = Search(A, n, key);
	if (loc != -1)
		cout << "found at index: " << loc << endl;
	else
		cout << "not found" << endl;

	// calling PrintReverse function
	// TODO
	cout << "the reversed array: ";
	PrintReverse(A, n);


	// calling ReplaceAll functions
	// TODO
	int old_val, new_val;
	cout << "Please enter the old and new value: ";
	cin >> old_val >> new_val;
	bool replaced = ReplaceAll(A, n, old_val, new_val);
	if(replaced)
	{
		cout << "replaced" << endl;
		PrintArray(A, n);
	}
	else
	{
		cout << "not replaced" << endl;
		PrintArray(A, n);
	}

	char c;
	cin >> c;
}

// correct errors
// TODO
// arr: 1,2,3,4
// key: 3
// expected output: true

int Search(int * arr, int n, int key)
{
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == key)
			return i;
	}

	return -1;
}

// write function print reverse
// TODO
void PrintReverse(int * A, int n)
{
	for (int j = n-1 ; j >= 0 ; j--)
	{
		cout << A[j] << " ";
	}
	cout << endl;
}

// write function replace all
// TODO
// arr: 1,2,1,3
// old: 1, new: 4
// expected:: arr after return: 4,2,4,3 | return: true
// actual:: 4,2,1,3 XX

bool ReplaceAll(int* A, int size, int old_val, int new_val)
{
	bool flag = false;
	for (int i = 0; i < size; i++)
	{
		if (A[i] == old_val)
		{
			A[i] = new_val;
			flag = true;
		}
	}

	return flag;
}

void PrintArray (int * arr, int n)
{
	cout << "Printing the array elements: ";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void ReadArray(int* arr, int n)
{
	cout << "Please enter 4 array elements: ";
	int i;
	for (i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
}

// *** [After-Class Exercise] ***
//    1- Fn. to get average of an array ---> DO IT NOW :D
//    2- Fn. to put zero instead of the odd or negative elements of an array and make the even as is ---> DO IT NOW :D
