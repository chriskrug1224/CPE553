#include <iostream>
#include <string>
using namespace std;

// static class methods
// static class attributes

class Trace {
private:
  const string& func;
  static int times; // declaration (extern) static variable - initialization must be outside the class
public:
  Trace(const string& func) : func(func) { // constructor
    times++;
    cout  << "Entering function " << func << "\n";
  }
  ~Trace() { //destructor
    cout << "Leaving function " << func << "\n";
  }
  static int count() { return times; } //static class member
};

int Trace::times = 0; // definition
void g() {
  Trace t("g");
}

void f() {
  Trace t("f");
  g();
}


int main() {
  for (int i = 0; i < 5; i++)
    f();
  cout << Trace::count() << '\n'; // static class members are called without calling object

}
