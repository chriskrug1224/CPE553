// friend function
// friend class
#include <string>
#include <iostream>
using namespace std;

class Author
{
private:
	string name;
	int age;

public:
	Author() {}
	Author(string n, int y){name =n; age=y;}
	~Author(){}

	void print() {
		cout << "Name: " << name << ", Age: "<< age << endl;

	}
};

class Book
{
private:
	Author *pA;

public:
	Book() {}
	~Book(){}

	void setAuth(Author *p) {
		pA = p;
	}

	void print() {
		cout << "("  << pA << ","<< endl;
    }
};


int main()
{

   Author author1("Lily", 50);
   Book *pb = new Book;
   pb->setAuth(&author1);
   delete pb;
   author1.print();
   pb->print();

   if (1){
       Book b1;
       b1.setAuth(&author1);
    }

   author1.print();
   Book b2;
   b2.setAuth(&author1);
   author1.print();



}
