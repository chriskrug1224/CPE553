#pragma once
#include <string>
using namespace std;
class Car
{
private:
	string maker;
	int model;
	string color;

public:
	void setMarker(string m);
	string getMaker();

	void setModel(int m);
	int getModel();

	void setColor(string n);
	string getColor();

	Car();
	~Car();



};

