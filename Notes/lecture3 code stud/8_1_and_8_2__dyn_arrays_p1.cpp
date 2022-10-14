
/* ----------------------------------------------------------------- */


#include <iostream>
using namespace std;

//Function: EvensOnly
//inputs: array A
//outputs: array evens
//prototype:
void EvensOnly (int * A, int n, int *& evens, int & m)
{
	// calc. m
	m = 0;
	for (int i = 0; i < n; i++)
	{
		if (A[i] % 2 == 0)
			m++;
	}
	// here m contains the number of even elements

	// allocate evens array
	evens = new int [m];

	// fill evens
	// index: 0 1 2 3
	// A    : 1 2 7 4
	// index: 0 1
	// evens: 2 4
	// actual:2 4
	int j = 0;
	for (int i = 0; i < n; i++)
	{
		if (A[i] % 2 == 0)
		{
			evens [j] = A[i];
			j++;
		}
	}
}

void ReadElements(int *A, int n)
{
	cout << "Please enter the elements:";
	for (int i = 0; i < n; i++)
	{
		cin >> A[i];
	}
}

void PrintElements(int *A, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << A[i] << " ";
	}
	cout << endl;
}


int main()
{
	cout << "================ EvensOnly Function ===============" << endl;

	// read number of elements
	int n;
	cout << "Please enter number of elements:";
	cin >> n;

	// read elements
	int * A = new int [n];
	ReadElements(A, n);

	// call function EvensOnly
	//TODO
	int * e = NULL;
	int m = 0;
	EvensOnly (A, n, e, m);

	// print evens array
	//TODO
	PrintElements (e, m);

	//TODO
	delete [] A;
	delete [] e;

	char c;
	cin >> c;
}
