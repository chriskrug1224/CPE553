#include <iostream>
#include <string>
using namespace std;

// access specifiers
// utility function


class Rect {
public: //private
  float len;
  float width; // declaration (extern) static variable - initialization must be outside the class
  bool islenValid(){ // define utility function
  if (len>0){
    return true;
    }
  else
    return false;

  }

public:
  Rect() { // constructor

  }
  ~Rect() { //destructor
    }

 void Stretch(Rect r){
     bool b1= r.islenValid();
     if (b1){
    len = len+r.len;
    width = width+r.width;
     }

 }

 float Area(){
  return len*width;
 }

 int CompareArea(Rect r){
     float a1= Area();
     float a2 = r.Area();
     if (a1 <=a2){
        return a2;
     }

    else
        return a1;
     }
void print(){
    cout << len << " " << width << endl;

}

};

int main() {

  Rect r1;
  r1.len = 4;
  r1.width = 10;
  float ar1= r1.Area();
  cout << ar1 << endl; // static class members are called without calling object
  int arr2 = r1.CompareArea(r1);
  cout << arr2 << endl; // static class members are called without calling object
  r1.print();
  r1.Stretch(r1);
  r1.print();

}
