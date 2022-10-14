// constexpt can be used with variables, classes, functions, ...
// it optimize the C++ code - get the result at the compile time not the running time
#include <iostream>
using namespace std;


constexpr double PI = 3.14159265358979;
constexpr double DEG2RAD = PI / 180;

int main(){
    cout << "PI = " << PI << endl;
    cout << PI + 1 << endl;
}
