#include <iostream>
#include <string>
using namespace std;

// access specifiers
// utility function


class Rect {
private: //private
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
//setters
void setLen(float L){
    if (L >= 0)
        len = L;
    else
        len = 0;
}
void setWidth(float W){
    if (W>=0)
        width = W;
    else
        width = 0;

}
//getters

float getLen(){
    return len;
}
float getWidth(){
    return width;
}

};

int main() {

  Rect r1;
  //r1.len = 4;
  //r1.width = 10;
  r1.setLen(10);
  r1.print();
  r1.setLen(-10);
  r1.print();
  r1.setLen(6);
  r1.setWidth(5);
  cout << r1.getLen() << endl;
  cout << r1.getWidth()<<endl;



}
