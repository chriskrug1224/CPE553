// Multifiles.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include "Car.h"
#include "Rect.h"


int main()
{
	Car c1;
	c1.setMarker("Honda");
	c1.setModel(2014);
	c1.setColor("Yellow");

	cout << "This car made by " << c1.getMaker()<<endl;
	cout << "This car model by " << c1.getModel() << endl;
	cout << "This car color is " << c1.getColor() << endl;

	Rect r1;
	Rect r2(2, 3);
	{
		Rect* p1 = new Rect;
		//delete p1;
	}
	cout << "before the main ended" << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
