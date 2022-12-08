/*
A(const A& obj)
A(A&& obj)

Note1: The main objective of move constructor and move assignment operator is to avoid costly deep copying
Note2: The move constructor and move assignment give finer control of which part of the object to be moved
Note3: Move semantics is implemented for all STL containers
Note4: The most useful place for rvalue reference is overloading copy constructor and copy assignment
*/
#include <iostream>
#include <cmath>
#include <vector>
#include <string>
using namespace std;

class A{

    public:
    int *p;

    public:
    A(){
        p = new int [100];
        cout <<"Default constructor" <<endl;
    }
    A(const A& aobj){////takes lvalue ref
         p = new int [100];
        cout <<"Copy constructor" <<endl;
        for(auto i = 0;i<100;++i){
                p[i] = aobj.p[i] ;
        }
    }
    A(A&& obj){//takes rvalue ref
        p = obj.p;
        obj.p = nullptr;
        cout <<"Move constructor" <<endl;
    }

    void print();
};

void A:: print(){
        for(int i = 0;i<100;++i){
        cout << p[i] << " ";
        }
        cout << endl;
    }



int main() {

   A a; //default constructor
   for(int i = 0;i<100;++i){
        a.p[i]=i;
    }
    a.print();
    cout << "=================="<< endl;
    A b = a;//copy constructor
    b.print();
    a.print();
    cout << "=================="<< endl;
    //*A b1(a);//copy constructor
    A c = move(a);//move constructor
    c.print();
    cout << "&&&&&" << endl;
    a.print();

 }



