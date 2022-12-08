#pragma once
#include <string.h>
#include <iostream>
using namespace std;

class Shape
{
	string color;
public:
	Shape(string c) {
		color = c;
	}
	// pure virtual func i.e. =0 & without body
	virtual int area() = 0;
	virtual void draw() = 0;
	virtual void erase() = 0;

	// remove implementtaion of at least one virtual, make it = 0
	// 1. can't make object of abstract class (Shape)
	// 2. must over-ride the pure virtual function at drived class
	
	//final classifier 
	// not allowed to over-ride final classifier func
	// program details - credits ACK - 
	virtual void display() final {
		cout << "this is shape" << endl;
	}
	
};
class Rectangle :public Shape {
private:
	int length;
	int width;
public:
	Rectangle(int l, int w, string c) : Shape(c) {
		length = l;
		width = w;
	}
	int area() {
		cout << "Rectangle class area: " << (width * length) << endl;
		return (width * length);
	}
	void draw() {
		cout << "Draw Rectangle" << endl;
	}
	void erase() {
		cout << "Erase Rectangle " << endl;
	}
	//void display() {}
};
class Circle :public Shape {
private:
	int radius;
public:
	Circle(int r, string c) : Shape(c) {
		radius = r;
	}
	int area() {
		cout << "Circle class area: " << 3.14 * (radius * radius) << endl;
		return (3.14 * radius * radius);
	}
	void draw() {
		cout << "Draw Circle" << endl;
	}
	void erase() {
		cout << "Erase Circle " << endl;
	}
};


