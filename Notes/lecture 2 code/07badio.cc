#include <iostream>
#include <string>
#include <fstream> //required to deal with files

// how to open file - error handling for opening file

using namespace std;

int main() {
  ifstream f;
  f.open("vec2.txt");
  //ifstream f("vec.txt"); // creates object of the class ifstream
  if (f.fail()){
    cerr << "error opening the file" << endl;
  }
  //method1: on how to read data from file
  string x,y;
  //f >> x >> y;
  //cout << "num1:" << x << endl;
  //cout << "num2:" << y << endl;

  while (!f.eof()) {
        f >> x;
        cout << x << endl;
  }
}
