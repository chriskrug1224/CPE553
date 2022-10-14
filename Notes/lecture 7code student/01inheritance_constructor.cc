#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

class Base
{
    int x;
public:
    Base(){
    x=0;
    cout << "Base default constructor\n";
    }
};

class Derived : public Base
{
    int y;
public:
    Derived(){
        y=0;
        cout << "Derived default constructor\n";
    }
    Derived(int i){
        y = i;
        cout << "Derived non-default construct\n";

    }

};

int main() {

    Base b;
    Derived d1;
    Derived d2(3);

}
