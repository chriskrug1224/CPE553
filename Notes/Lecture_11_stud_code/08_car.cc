// friend function
// friend class
#include <string>
#include <iostream>
using namespace std;

class Car
{
private:
	int mModel;
	string mName;

public:
	Car() {}
	Car(string name, int model){
	    mName = name;
	    mModel = model;
	    cout << "Creating car" << endl;
	}
	~Car(){
        cout << "Destroying car" << endl;
	}

	void printCarInfo(){

	    cout << "Car Band name: " << mName << "Car Model: " << mModel << endl;

	}
};


class Person
{
private:
	Car *pmcar;

public:
	Person(Car *pcar) {
        pmcar = pcar;
        cout << "Creating person" << endl;
	}
	~Person(){
        cout << "Destroying person" << endl;
    }
};


int main()
{

   Car c("BMW",520);
   Person *p = new Person(&c);
   delete p;

   c.printCarInfo();

}
