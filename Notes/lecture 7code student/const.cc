//#############################################################
// const
//   - A compile time constraint that an object can not be modified
//


/*
  Why use const
		a.) Guard against inadvertent write to the variable.
		b.) Self documenting
		c.) Enable compiler to do more optimiztion, making code tighter.
		d.) const usually means the variable is put in ROM.
*/
/*
1. const parameter;
2. const return value;
3. const function.

*/
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

// const used with functions
class Dog {
   int age;
   string name;
public:
   Dog() { age = 3; name = "dummy"; }

   // const parameters //=====================================
   // a++, by reference

     void setAge(const int& a) { age = a;  }

   //2. without reference
     //void setAge(const int a) { age = a;}
     // remove & -> remove constant (becomes temp )

   //3. no overloaded using const
    //void setAge(const int a) { age = a; }
    //void setAge(int a) { age = a; }


   // Const return value // ===========================
   const string& getName() {return name;}
   // remove & -> remove constant (becomes temp )

   // const function // ================================
   // function should not return any value of the member data of the class
   void printDogName() const { cout << name << " const" << endl; }
   void printDogName() { cout << getName() << " non-const" << endl; }

// void printDogName() const { cout << getName() << " const" << endl; }
  //void printDogName() const { cout << name << " const" << endl; age++ }

};

int main() {
   Dog d1;
   int i = 9;
   d1.setAge(i);
   cout << i << endl;

   Dog d2;
   const string& n = d2.getName();
   cout << n << endl;

   Dog d3;
   d3.printDogName();

   const Dog d4;
   d4.printDogName();

}



