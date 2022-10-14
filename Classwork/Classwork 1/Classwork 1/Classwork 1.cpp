#include <iostream>
using namespace std;

void ReadElements(int* A, int n) {
	cout << "Please enter the numbers for the array! ";
	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}
}

void PrintElements(int* A, int n) {
	for (int i = 0; i < n; i++)
	{
		cout << A[i] << " ";
	}
	cout << endl;
}

bool IfEven(int* A, int n) {
	bool flag = false;
	for (int i = 0; i < n; i++)
	{
		if (A[i] % 2 == 0)
		{
			flag = true;
			
		}
	}

	return flag;
}

int main() {
	int size;
	cout << "Please enter the number of elements you want: ";
	cin >> size;
	int* A = new int[size];
	ReadElements(A, size);
	PrintElements(A, size);
	IfEven(A, size);
	bool Even = IfEven(A, size);
	if (Even)
	{
		cout << "There is an even element!" << endl;
	}
	else
	{
		cout << "There is no even element!" << endl;
	}
}