#include <iostream>
#include <cmath>
#include <vector>
//copy constructor
// shallow copy
// deep copy
using namespace std;


class Vector { // abstract class
private:
	int *vec;
	int size;
public:
	Vector(int size = 10) {
	    cout << "default copy constructor"<<endl;
	    this-> size = size;
	    this-> vec = new int [size];
	}
	~Vector(){
	    delete [] this->vec;
	}

	//deep copy
	/*Vector(const Vector &other){
        cout << "customized copy constructor"<<endl;
        this->size = other.size;
        this->vec = new int[this->size];
        for (int i=0; i<this->size; i++){
            this->vec[i] = other.vec[i];

        }
	}*/

};


int main() {
	//shallow copy
	int num1 =10; int num2 = 20;
	int *intptr = &num1;
	int *intptrd = new int(10);
	intptrd = intptr; // shallow copy may lead to memory leak
	cout << intptr << " "<<intptrd << endl;
	cout << *intptr << " "<< *intptrd << endl;

	//deep copy
	int *intptrd1 = new int(50);
    int *intptrd2 = new int(30);
    *intptrd1 = *intptrd2; // dereference
    cout << intptrd1 << " "<<intptrd2 << endl;
    cout << *intptrd1 << " "<< *intptrd2 << endl;

    delete intptrd1,intptrd2;

	Vector a(5);
	Vector b(a); // copy or vector b =a;

}
