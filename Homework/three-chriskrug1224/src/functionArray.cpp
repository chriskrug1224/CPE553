#include <iostream>


using namespace std;

// Write functions for problem one here

void ReadElements(int *A, int n){
    // write your code here
    cout << "The size of the array is: " << n << endl;
    cout << "Please enter the elements: ";
    for (int i = 0; i < n; i++){
        cin >> A[i];
    }

}
void PrintElements(int *A, int n){
    // write your code here
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}
void PrintElementsRev(int *A, int n) {
    // write your code here
    for (int i = n-1; i >= 0; i--)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}
void OddsOnly(int *A, int n, int *&odds, int &m) {
    // write your code here
    m = 0;
    for (int i = 0; i < n; i++) {
        if (A[i] % 2 != 0) {
            m++;
        }
    }
    // count how many odd number you have
    cout << "You have " << m << " of odd numbers!" << endl;
    // allocate odds new array for odds in memory equal number of odd's number we found
    odds = new int[m];
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (A[i] % 2 != 0) {
            odds[count] = A[i];
            count++;
        }
    }
        cout << "Odds are: ";
        for (int i = 0; i < m; i++) {
            cout << odds[i] << " ";
        }
        cout << endl;
        // Now fill the odds numbers in the new array
        // fill odds
        // index: 0 1 2 3
        // A    : 1 4 2 5
        // new index:     0 1
        // odds:          1 5
        // actual index:  0 3


        // Use you function PrintElements in main.cpp to print new odds array odds and m number

    }


