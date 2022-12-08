#include <iostream>
#include <cmath>
#include <vector>
//copy constructor
// shallow copy
// deep copy
using namespace std;


class point {

public:
	point();// default constructor
	~point(); // destructor
	point(const point & orig); //copy constructor
	point& operator= (const point& rhs);// assignment operator
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

    cout << "(" << *(this->x) << ", " << *(this->y) << ")"  << endl;
}

void PrettyPrint(point p){
    cout << "value of point = ";
    p.printPoint();
    cout << endl;
}
point& point::operator= (const point& rhs){

    cout << "copy assignment operator called" << endl;
    *(this->x) = *rhs.x;
    *(this->y) = *rhs.y;
    return *this; //same  this. pointer to the class

}
int main() {
	point p1,p2;
	p1.setPoint(5,2);
	p2 = p1;
	// problem: default copy assignment is to make p1 and p2 data member points to the same values at heap
	// solution: to implement copy assignment operator

	p1.setPoint(4,4);
	p1.printPoint();
	p2.printPoint();

}
