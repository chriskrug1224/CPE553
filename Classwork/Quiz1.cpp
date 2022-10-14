#include <iostream>

using namespace std;

//Quiz 1 Question

class Complex {
public:
  float real;
  float img;
  Complex()
  {
    real = 0;
    img = 0;
  }
  Complex(float r, float i)
  {
    real = r;
    img = i;
  }

  void print() {
    cout << "Result= " << real << ", " << img << endl;
  }


};
Complex operator+(Complex c1, Complex c2) {
  Complex result;
  result.real = c1.real + c2.real;
  result.img = c1.img + c2.img;
  return result;
}

int main() {
  float real1, img1, real2, img2;
  cout << "Enter two complex numbers: " << endl;
  cin >> real1;
  cin >> img1;
  cin >> real2;
  cin >> img2;
  Complex n1(real1, img1);
  Complex n2(real2, img2);
  Complex result;
  result = n1 + n2;
  result.print();
}