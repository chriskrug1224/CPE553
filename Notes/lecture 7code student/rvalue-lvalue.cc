/*
- Problems:
1) wasteful resources use when function return object, variable
2) wasteful resources use when passing argument by value to function

- Solutions:
1) use of move semantics
2) pass by reference

- Concepts:
1) lvalue & rvalue
2) lvalue & ravalue reference
3) std:: move semantics

lvalue:
1) a value that resides in memory (heap or stack)
2) lvalue is addessable
3) can't be moved

rvalue:
1) a value that is not lvalue
2) lvalue resides on the right hand side (90%)
3) can be moved
*/
#include <iostream>
#include <cmath>
#include <vector>
#include <string>
using namespace std;

class Dog {
   int age;
   string name;
public:
   Dog() { age = 3; name = "dummy"; }
};

double square_value(int x){return x*x;}
double stratch_value(int& x){return x+100;}
double stratch_value(const int& x){return x+100;}

void f(int & l){cout << "lvalue" << endl;}
void f(int && l){cout << "rvalue" << endl;}

void z(int & l){cout << "lvalue" << endl;}
void z(const int & l){cout << "const lvalue" << endl;}
void z(int && l){cout << "rvalue" << endl;}


int main() {

    //lvalue & rvalue
    // single variables
    int i = 5; // i is lvalue
    int *p = &i;
    cout << i << " " << &i << endl;
    //int *p1 = &5

    int j = i+1;
    // 5 and i+1 are r value

    //functions
    double x = square_value(5);
    cout << x << endl;
    //square_value(5) is rvalue -

    // objects
    Dog d1;
    Dog *p2 = &d1;

    /* ===============================lvalue reference===================================
     lvalue reference
     1. normal/old references (&)
     2. lvalue ref bound to lvalues
     3. const lvalue bound to rvalue
     */

     int a = 10;
     int &b = a;
     //int &b = 10; // generate error cannot bind non-const lvalue ref
     //const int &b = 10; // no error using const lvalue ref

     stratch_value(a);
     //stratch_value(10); // generate error cannot bind non-const lvalue ref - solution is to overload this function with const
     stratch_value(10); // generate no error. overload const int&x is used in this case

     /* ===============================rvalue reference===================================
     rvalue reference
     1. introduced in c++ 11 standard
     2. ravalues ref bind to only rvalues
     3. represented with &&
     4.
     */

     int c = 10;
     int && d = 10;
     int && e = stratch_value(10);

     /* ===============================example1===================================*/
     int g = 10;
     f(g); // lvalue
     f(10);// rvalue
     f(std::move(g));//rvalue


     /* ===============================example2===================================*/
     cout << "==========================================" << endl;
     int h=10;
     z(h);//;lvalue
     z(10);//bit tricky - rvalue
     z(std::move(h));//rvalue
     z(static_cast<int&&> (h));//rvalue





}



