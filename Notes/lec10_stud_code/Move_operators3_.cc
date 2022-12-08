/*
A& operator= (const A&) -> copy assignment operator
A& operator= (const &&) -> move assignment operator

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

     //copy assignment operator
    A& operator = (const A& obj){
        cout << "copy assignment"<< endl;
        p = new int [100];
        for(auto i = 0;i<100;++i){
                p[i] = obj.p[i] ;
        }
        return *this;
    }

    //move assignment operator
     A& operator = (A&& obj){

         cout << "move assignment"<< endl;

         // free resources of this object
         //delete []p;
         //assignment of object to pointer p
         for(auto i = 0;i<100;++i){
                this->p[i] = obj.p[i] ;
        }
         // null the obj
         obj.p = nullptr;
         return *this;


     }
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
    A b;
    b = a;
    a.print();
    b.print();
    cout << "=================="<< endl;

    /* b = move(a);// copy assignment operator is called:
    1. because there is no move assignment operators
    2. because copy assignment operator(const A& obj) lvalue ref can take a rlvalue
    */

    A c;
    a.print();
    c = move(a);
    c.print();
    a.print();
    cout << "=================="<< endl;

    return 0;

 }



