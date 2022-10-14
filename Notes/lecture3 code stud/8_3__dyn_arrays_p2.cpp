
// *** [After-Class Exercise] ***
//    1- Fn. AllOccurences: outputs an array contains the positions (indeces)
//       of all occurences of a value in array ---> DO IT NOW :D
//    2- Fn. SignSplit: splits the array into negative array and positive array  ---> DO IT NOW :D
//        Question: (what the changes to be made if we want to:
//                  delete the original array and make it equal NULL after splitting it?? Should the prototype be changed??)


#include <iostream>
using namespace std;

//Function: Intersect (Assume no duplicates in input arrays
//          and they're sorted)
//inputs: array A, array B
//outputs: array C
//prototype:
// # iteration: 2 * n * m
void Intersect (int * A, int n, int * B, int m, int *& C, int& p)
{
	// calc. p
	p = 0;
	for (int i = 0; i < n; i++) // loop on A
	{
		for (int j = 0; j < m; j++) // loop on B
		{
			if (A[i] == B[j])
			{
				p++;
				break;
			}
			if (B[j] > A[i])
				break;
		}
		// break will make me go here
	}

	// allocate array C
	C = new int [p];

	// fill array C
	int k = 0;
	for (int i = 0; i < n; i++) // loop on A
	{
		for (int j = 0; j < m; j++) // loop on B
		{
			if (A[i] == B[j])
			{
				// add element in array C
				C[k] = A[i];
				k++;
				break;
			}
			if (B[j] > A[i])
				break;
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
	// read number of elements
	int n1;
	cout << "Please enter number of elements:";
	cin >> n1;
	// read elements
	int * A1 = new int [n1];
	ReadElements(A1, n1);

	// read number of elements
	int n2;
	cout << "Please enter number of elements:";
	cin >> n2;
	// read elements
	int * A2 = new int [n2];
	ReadElements(A2, n2);

	// call function Intersect
	//TODO
	int * A3 = NULL;
	int n3 = 0;
	Intersect(A1, n1, A2, n2, A3, n3);

	delete [] A1; // Do NOT forget to deallocate any dynamically allocated memory!!
	delete [] A2; // Do NOT forget to deallocate any dynamically allocated memory!!


	// print intersection array
	PrintElements(A3, n3);


	//TODO
	delete [] A3; // Do NOT forget to deallocate any dynamically allocated memory!!

	char c;
	cin >> c;
}


// *** [After-Class Exercise] ***
//    1- Fn. AllOccurences: outputs an array contains the positions (indeces)
//       of all occurences of a value in array ---> DO IT NOW :D
//    2- Fn. SignSplit: splits the array into negative array and positive array  ---> DO IT NOW :D
//        Question: (what the changes to be made if we want to:
//                  delete the original array and make it equal NULL after splitting it?? Should the prototype be changed??)
