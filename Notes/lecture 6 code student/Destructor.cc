// Constructor and desctructor
#include <iostream>
using namespace std;

class A {
public:
  A() { cout << "born" << endl; }
  ~A() { cout << "died" << endl; }

};

void f() {
  A a2;
}
void g() {
  A a2;
}
//static int x = f();
//static int y = g();
A a1;
A a2;
int main(){
  cout << "###########" <<endl;
  f();
  cout << "###########" <<endl;
  A a1;
  cout << "###########" <<endl;
  g();
  cout << "###########" <<endl;
}
