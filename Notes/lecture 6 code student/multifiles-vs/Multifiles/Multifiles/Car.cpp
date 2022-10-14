#include "Car.h"

void Car::setMarker(string m) {
	maker = m;

}
string Car::getMaker() {
	return maker;
}

void Car::setModel(int m)
{
	model = m;
}

int Car::getModel()
{
	return model;
}

void Car::setColor(string n)
{
	color = n;
}

string Car::getColor()
{
	return color;
}

Car::Car()
{
}

Car::~Car()
{
}