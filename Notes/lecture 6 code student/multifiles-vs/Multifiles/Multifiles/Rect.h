#pragma once
class Rect
{
private:
	float length;
	float width;
public:
	Rect();
	Rect(float L, float W);
	//Rect(float L=0, float W=0);
	~Rect();
	void setlength(float L);
	void setwidth(float W);
	float getlength();
	float getwidth();

};

