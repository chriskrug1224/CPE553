#include <iostream>
#include<cmath>

using namespace std;
// Write code that check if number is prime or not

void isPrime(int x) {
    bool Prime = false;
    if (x == 0 || x == 1)
    {
        Prime = false;
    }
    else
    {
        for (int i = 2; i < x; i++)
        {
            if (x % i == 0) {
                Prime = true;
            }

        }

    }
    if (Prime == true)
        cout << x << " is prime!" << endl;
    else
        cout << x << " is not prime!" << endl;
    // write your code here
    // consider  a special case in your function, i.e., x = 1 is not prime.
    // no return value just print if prime or not

}