#include <iostream>
#include <string>
using namespace std;

// access specifiers
// utility function


class Rect {
private: //private
  float len;
  float width; // declaration (extern) static variable - initialization must be outside the class

public:
  Rect(float L, float W) {//non default
      // constructor
      // len = L;
      // width = W;
      setLen(L);
      setWidth(W);

  }


  /*Rect(float L=0, float W=0) {// combined default and non-default coonstructor
      // constructor
      // len = L;
      // width = W;
      setLen(L);
      setWidth(W);

  }*/


  Rect(){//default constructor
      len = 0;
      width = 0;

  }

  ~Rect() { //destructor
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

}; //end of class

int main() {

  Rect r1(2,3);
  //r1.len = 4;
  //r1.width = 10;
  cout << r1.getLen() << endl;
  cout << r1.getWidth()<<endl;

  Rect r2; //give error with default constructor- why?
  //Rect r3(4);
  //Rect r4(3,6);




}
