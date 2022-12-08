// friend function
// friend class
#include <string>
#include <iostream>
using namespace std;

class Person
{
private:
	string name;
	string gender;
	float age;

public:
	Person() {
		name = "unknown";
		gender = "unknown";
		age = 0;
	}
	Person(string n, string g, float a) {
		name = n;
		gender = g;
		age = a;
	}
	void set_name(string n) {
		name = n;
	}
	string get_name() {
		return name;
	}
	void set_age(float a) {
		age = a;
	}
	float get_age() {
		return age;
	}
	void set_gender(string g) {
		gender = g;
	}
	string get_gender() {
		return gender;
	}
	void display() {
		cout << "The person basic data" << endl;
		cout << name << " " << gender << " " << age << endl;
	}

	//friend function def
	friend void print(Person p);
	// if there is derived class from person class. the derived call WON'T inheritance the friend function


	// class B friend to class A. i.e. class B can use/access data members and attribute of class A
	// 1. class A can't use or access data members and attributes of class B (not mutual exclusive)
 	// 2. any derived class from class B won't inheritance the friend relation to class A

 	// friend class declaration
 	friend class printclass;
}; // outside the person class

//friend function implemenation
void print(Person p) {
	cout << "The basic data of person" << endl;
	cout << " Name: " << p.name << " Age: " << p.age << " Gender: " << p.gender << endl;
}

//friend class implementation
class printclass{

public:
    void print (Person p){
        cout << "The basic data of person" << endl;
	    cout << " Name: " << p.name << " Age: " << p.age << " Gender: " << p.gender << endl;
    }


};

int main()
{
    // call friend func
    Person x ("John", "male", 30);
    print(x);

    cout << "###############" << endl;

    // call friend func
    Person p ("Mark", "male", 40);
    printclass pc;
    pc.print(p);


}
