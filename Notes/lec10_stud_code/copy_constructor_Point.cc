#include <iostream>
#include <cmath>
#include <vector>
//copy constructor
// shallow copy
// deep copy
using namespace std;


class point { // abstract class

public:
	point();// default constructor
	~point(); // destructor
	point(const point & orig); //copy constructor
    void setPoint(const int _x, const int _y);
    void printPoint();
private:
    int *x;
    int *y;
};

point::point(){
    cout << "constructor called" << endl;
    this->x = new int;
    * (this->x) = 0;

    this->y = new int;
    *(this->y) = 0;
}

point::~point(){
    cout << "Destructor called" << endl;
    if (this->x != 0){
        delete this->x;
    }
    if (this->y != 0){
        delete this->y;
    }
}

point::point(const point & orig){

    cout << "copy constructor called" << endl;
    this->x = new int;
    * (this->x) = *(orig.x);

    this->y = new int;
    *(this->y) = *(orig.y);

}
void point::setPoint(const int _x, const int _y){
    cout << "set point is called" << endl;
    * (this->x) = _x;
    * (this->y) = _y;
}
void point::printPoint(){

    cout << "(" << *(this->x) << ", " << *(this->y) << ")" ;
}

void PrettyPrint(point p){
    cout << "value of point = ";
    p.printPoint();
    cout << endl;

}
int main() {
	point p1;
	cout << "----------------" << endl;
	p1.setPoint(5,2);
	cout << "----------------" << endl;
	PrettyPrint(p1);
	// Problem: p1 is passed to p object. Both p1 and p are pointing to the same memory location of x,y in heap using *x, *y
	// end of PrettyPrint } end of scope of p and the destructor is called. Destructor free what x and y are pointing to
	// solution: is to use copy constrctor
	cout << "----------------" << endl;
	PrettyPrint(p1);
	cout << "----------------" << endl;
}
