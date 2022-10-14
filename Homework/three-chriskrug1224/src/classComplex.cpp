#include <iostream>
#include "classComplex.h"

using namespace std;
// This part of creating typical class is commented because we are defining class in header file in addition to }; at the end
// in addition we need to indent function and indicate from which file it is coming e.g. std::cout.
// so we will use class name in .h file as: Complex::functionName(){}
//class Complex {
//    float real, img;
//public:
Complex::Complex() {
    //default constructor to initialize complex number to 0+0i
    // write your code here
    real = 0;
    img = 0;

}
Complex::Complex(float r, float i) {
    //parameterized constructor to initialize complex number.
    // write your code here
    real = r;
    img = i;

}
void Complex::set(){ // you can do set_real and another one for set_img
    // leave it empty, not required in the assignment
    // set mean change the current value
}
void Complex::get(){ // you can do get_real and another one for get_img
    // leave it empty, not required in the assignment
    // get mean return the current value and not print
}
void Complex::display(){
    // display function print complex number as real +j (imaginary)
    // write your code here
    cout << real << " + " << img << "i" << endl;

}


void Complex::print() {
    // this function is read only print complex number as real imaginary with space between two value
    // write your code here
    cout << real << "  " << img << endl;
}

Complex Complex::negative(){
    // this function return the negative complex number
    // write your code here
    Complex result;

    result.real = real*-1;
    result.img = img*-1;

    return result;

}

Complex mul(Complex c1, Complex c2){
    // this function perform complex multiplication and return the value
    // write your code here
    Complex result;

    result.real = c1.real*c1.real - c1.img*c2.img;
    result.img = c1.real*c2.img + c1.img*c2.real;

    return result;

}
Complex add(Complex c1, Complex c2){
    // this function perform complex addition and return the value
    // write your code here
    Complex result;

    result.real = c1.real + c2.real;
    result.img = c1.img + c2.img;

    return result;

}
Complex sub(Complex c1, Complex c2){
    // this function perform complex subtraction and return the value
    // write your code here
    Complex result;

    result.real = c1.real - c2.real;
    result.img = c1.img - c2.img;

    return result;
}


Complex operator+(Complex c1, Complex c2) {
    // Overload (+) operator
    // write your code here
    Complex result;
    result.real = c1.real + c2.real;
    result.img = c1.img + c2.img;

    return result;

}

ostream& operator<<(ostream& ostr, Complex c){
    // Overload (<<) operator  to display complex number as real +j (imaginary)
    // write your code here
    ostr << c.real << " + " << c.img << "i" << endl;

}
