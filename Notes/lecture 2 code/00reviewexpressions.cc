#include <iostream>
#include <cmath>
// function call and function def
// round function in c++
using namespace std;

double hypot(double a, double b) {
    return sqrt(a*a+b*b);
}

int main() {
    uint64_t a = 1 + 10000000000ULL;
    uint64_t myBigVariableName = 50000ULL * 50000; //type promotion
    cout << myBigVariableName << '\n';
    cout << hypot(3, 4) << '\n';
    int b = 4.9;  // a= 4
    int roundedOff = round(4.9);
    cout << roundedOff << '\n';
    int roundedUp = ceil(4.9);
    cout << roundedUp << '\n';
    int roundedDown = floor(4.9);
    cout << roundedDown << '\n';
}
