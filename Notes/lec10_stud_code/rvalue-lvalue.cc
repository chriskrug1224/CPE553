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
2) lvalue is addressable
3) can't be moved
4) can be on the right or the left

rvalue:
1) a value that is not lvalue
2) lvalue resides on the right hand side (likely)
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

//double stratch_value(int x){return x+100;}
double stratch_value(int& x){return x+100;}
double stratch_value(const int& x){return x+100;}

void f(int & l){cout << "lvalue" << endl;}
void f(int && l){cout << "rvalue" << endl;}

void z(int & l){cout << "lvalue" << endl;}
void z(const int & l){cout << "const lvalue" << endl;}
void z(int && l){cout << "rvalue" << endl;}


int main() {

    //lvalue & rvalue
    ////////////////////// single variables/////////////////////////////////////
    int i = 5; // i is lvalue, r is rvalue
    int *p = &i;
    cout << i << " " << &i << endl;
    //int *p1 = &5 //can't re-assign r-value

    int j = i+1;
    // 5 and i+1 are r value

    //////////////////////////functions////////////////////////////////////////
    double x = square_value(5);
    cout << x << endl;
    //return of square_value(5) is rvalue (temp)
    // x is rvalue


    // objects
    Dog d1; //d1 is lvalue
    Dog *p2 = &d1; //d1 is lvalue

    /* ===============================lvalue reference===================================
     lvalue references
     1. normal/old references (&)
     2. lvalue ref can be bounded to lvalues
     3. const lvalue bound to rvalue
     */

     int a = 10;
     int &b = a;// bound lvalue reference to lvalue
     //int &b = 10; // generate error - cannot bind lvalue reference to rvalue
     //const int &b = 10; // no error - using const lvalue ref to rvalue

     stratch_value(a);     // no error - a is lvalue
     //stratch_value(10);  // if there is no function overloading - generate error cannot bind non-const lvalue ref to rvalue- solution is to overload this function with const
     stratch_value(10);    // generate no error. overload stratch_value(const int& x) is called in this case

     /* ===============================rvalue reference===================================
     rvalue reference
     1. introduced in c++ 11 standard
     2. ravalues ref bind to only rvalues
     3. represented with &&
     4.
     */

     int c = 10; // 10 is rvalue
     int && d = 10; // &&d is rvalue reference can be bounded rvalue
     int && e = stratch_value(10); // statch_value(10) return integer (rvalue) can be bounded with && e rvalue reference

     /* ===============================example1===================================*/
     int g = 10;
     f(g); // lvalue
     f(10);// rvalue
     f(std::move(g));//move function takes lvalue and convert to rvalue


     /* ===============================example2===================================*/
     cout << "==========================================" << endl;
     int h=10; // h is lvalue, 10 is rvalue
     z(h);//;lvalue 1st func
     z(10);//bit tricky (10 is rvalue can be assigned to rvalue ref 3rd func and const lvalue ref 2nd func ) - precedence to rvalue ref
     z(std::move(h));//rvalue
     z(static_cast<int&&> (h));//rvalue -> note h is lvalue, cast it to rvalue reference

     /*=============================std:move========================================*/
     //std:move()is a function from C++ standard library for casting to a rvalue reference
     // move assignment operator and move constructor
     // both functions expected rvalue reference && as a reference
     // static_cast<int&&> (h) -> h is lvalue, casting it to rvalue && why? to avoid copy objs

}



