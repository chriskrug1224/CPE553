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
    //1. create object and access the data members via calling object
    ///////////////////////////////////////////////////////////
    Rect r1;
    r1.length=5.0;
    r1.width=10.0;
    r1.area();
    cout << r1.area() << endl;

    // 1. create pointer -> static object and access data members
    Rect* p;
    p = &r1;
    (*p).length = 15;
    p->length = 15;

    Rect* q;
    q = p;
    cout << q->area() << endl;

    //////////////////////////////////////////////////////////////
    //// 2. create pointer -> dynamic object and access data members
    ////////////////////////////////////////////////////////////
    Rect* p2;
    p2 = new Rect;
    p2->width = 20;
    p2->length = 10;
    cout << p2->area()<< endl;
    delete p2;

    /////////////////////////////////////////
    //// 3. create static array of objects
    //////////////////////////////////////////
    Rect A[3]; //create static empty array
    for (int i = 0; i<3; i++)//fill the array
    {
        cin >> A[i].length;
        cin >> A[i].width;
    }
    for (int i = 0; i<3; i++)//usage of array elements (print)
    {
        A[i].print();
    }
    Rect* p3;
    p3 = A; // assign pointer to the array of objects
    cout << p3[0].area() << endl;

    /////////////////////////////////////////
    //// 4. create dynamic array of objects
    /////////////////////////////////////////
    int n;
    Rect* p4; // create pointer
    cout << "Enter the size of dynamic array of objects" << '\n';
    cin >> n;
    p4 = new Rect [n]; // create dynamic array of objects
    p4[0].length = 3; // access data members of the class
    p4[0].width = 3;
    p4[0].print();
    delete [] p4;


}


