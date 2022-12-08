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
	void ReadData() {
		cout << "line Readdata"<<endl;
		float a,b;
		cin>>a>>b;
		setX(a); setY(b);
    }
    void PrintData() {
		cout << x << "," << y << endl;
    }
};

class Polygon
{
private:
	Point *pArr;
	int count;

public:
	Polygon(int n) {
	    count = n;
	    pArr = new Point[n];
	}
	~Polygon() {
	    delete [] pArr;
	}

	void ReadData () {
		for (int i = 0; i<count; i++){
		    pArr[i].ReadData();
		}
	}
};

int main()
{
   Polygon poly1(3);
   poly1.ReadData();

}
