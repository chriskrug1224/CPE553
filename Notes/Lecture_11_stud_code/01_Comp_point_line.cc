// friend function
// friend class
#include <string>
#include <iostream>
using namespace std;

class Point
{
private:
	float x;
	float y;

public:
	Point() {
		x=y=0;
    }
	Point(float a, float b) {
		setX(a);
		setY(a);
	}
	void setX(float x1) {
		x = x1;
	}
	void setY(float y1) {
		y = y1;
	}
	float getX() {
		return x;
	}
	float getY() {
		return y;
	}
	void print() {
		cout << "(" << x << ", " << y << ")" << endl;
    }
};

class Line
{
private:
	int ID;
	Point p1;
	Point p2;

public:
	Line() {}
	Line(int i, float x1, float y1, float x2, float y2)
	:p1(x1,y1),p2(x2,y2)
	{
	    setID(i);
	}

	void setID (int i) {
		ID = i>=0?i:0;
    }
	void print() {
		cout << ID << endl;
		p1.print();
		p2.print();
	}
};

int main()
{
   Line L1(10,1,1,2,2);
   L1.print();

}
