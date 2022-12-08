#include <iostream>
#include <cmath>
#include <vector>
#include <string>
using namespace std;

class A{

    public:
    A(){cout <<"Default constructor" <<endl;}
    A(const A&){cout <<"Copy constructor" <<endl;}//takes lvalue ref
    A(const A&&){cout <<"Move constructor" <<endl;}//takes rvalue ref

};


int main() {

   A a; //default constructor
   A b = a;//copy constructor
   A b1(a);//copy constructor
   A c = move(a);//move constructor
   //A c1 = move(a);//move constructor

}



