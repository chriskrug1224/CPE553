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

class Hexagon
{
private:
	Point pArr[6]; // array of objects

public:
	Hexagon() {}

	void ReadData () {
		for (int i = 0; i<6; i++){
		    pArr[i].ReadData();
		}
	}
	void PrintData () {
		for (int i = 0; i<6; i++){
		    pArr[i].PrintData();
		}
	}
};

int main()
{
   Hexagon hex1;
   hex1.ReadData();

}
