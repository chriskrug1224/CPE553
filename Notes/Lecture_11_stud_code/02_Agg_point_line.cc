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
	Point *p1;
	Point *p2;

public:
	Line() {
	    p1 = new Point;
	    p2 = new Point;
	}
	Line(int i, float x1, float y1, float x2, float y2){
	    setID(i);
	    p1 = new Point;
	    p2 = new Point;
	    p1->setX(x1);p1->setY(y1);
	    p2->setX(x2);p2->setY(y2);
	}
	~Line() {
	    delete p1;
	    delete p2;
	}

	void setID (int i) {
		ID = i>=0?i:0;
    }
	void print() {
		cout << ID << endl;
		p1->print();
		p2->print();
	}
};

int main()
{
   Line L1;
   L1.print();

   Line L2(10,1,2,3,4);
   L2.print();

}
