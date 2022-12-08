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
	virtual int area() {
		cout << "Parent class area:" << endl;
		return 0;
	}
	virtual void draw() {
		cout << "Draw Parent Shape in" << color << " color " << endl;
	}
	virtual void erase() {
		cout << "Erase Parent Shape in" << color << " color " << endl;
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
};
class Circle :public Shape {
private:
	int radius;
public:
	Circle(int r, string c) : Shape(c) {
		radius = r;
	}
	int area() {
		cout << "Circle class area: " << 3.14 *(radius * radius) << endl;
		return (3.14* radius * radius);
	}
	void draw() {
		cout << "Draw Circle" << endl;
	}
	void erase() {
		cout << "Erase Circle " << endl;
	}
};

