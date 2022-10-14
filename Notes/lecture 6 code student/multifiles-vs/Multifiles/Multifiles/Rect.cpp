#include "Rect.h"
#include <iostream>
using namespace std;

Rect::Rect()
{
	length=0;
	width = 0;
	cout << "Rect width and length are initialized" << endl;
}

Rect::Rect(float L, float W)
{
	length = L;
	width = W;
}

/*/Rect::Rect(float L, float W)
{
	setlength(L);
	setwidth(W);
}*/

Rect::~Rect()
{
	cout << "the dectructor is called" << endl;
}

void Rect::setlength(float L)
{
	length = L;

}

void Rect::setwidth(float W)
{
	width = W;

}

float Rect::getlength()
{
	return length;
}

float Rect::getwidth()
{
	return width;
}
