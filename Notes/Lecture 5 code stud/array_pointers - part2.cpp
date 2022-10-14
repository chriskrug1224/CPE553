#include <iostream>
using namespace std;

class Rect{

public:
    float length, width;

    void print(){cout << length << " " << width << " " << endl;
    }

    float area(){return width*length;
    }
};

int main()
{
    ///////////////////////////////////////////////////////////
    //1. static array of pointers to dynamic objects
    ///////////////////////////////////////////////////////////
    Rect* A[3]; // static memory allocation for array of pointers
    for (int i = 0; i<3; i++) // memory allocation
    {
         A[i] = new Rect;
    }
    for (int i = 0; i<3; i++) //filling
    {
         cin >> A[i]->length;
         cin >> A[i]-> width;
    }
    for (int i = 0; i<3; i++) //usage
    {
         A[i]-> print ();
    }
    for (int i = 0; i<3; i++) //memory de-allocation
    {
         delete A[i];
    }

    ///////////////////////////////////////////////////////////
    //2. dynamic array of pointers to dynamic objects
    ///////////////////////////////////////////////////////////
    int n= 3;
    Rect* *p;
    p = new Rect*[n];

    for (int i = 0; i<3; i++) // memory allocation
    {
         A[i] = new Rect;
    }
    for (int i = 0; i<3; i++) //usage
    {
         cin >> A[i]->length;
         cin >> A[i]-> width;
    }
    for (int i = 0; i<3; i++) //usage
    {
         A[i]-> print ();
    }
    for (int i = 0; i<3; i++) //memory de-allocation
    {
         delete A[i];
    }
    delete []p;

}


