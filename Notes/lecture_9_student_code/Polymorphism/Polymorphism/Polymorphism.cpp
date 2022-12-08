// Polymorphism.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iostream>
#include "Shape.h"

using namespace std;
int main()
{
    Shape* shap_prt;
    Rectangle rec(10, 7, "Red");
    Circle c(5, "Yellow");
    // Polymorphism (same object name can point to different objs)
    // Only possible using virtual func
    shap_prt = &rec;
    shap_prt->area();
    shap_prt->draw();

    shap_prt = &c;
    shap_prt->area();
    shap_prt->draw();

    // what happened if we remove virtual at Shape class
    // early binding (static binding) - compiler will use parent methods 
    // pointer is a type of parent class Shape
    // summary (virtual func at parent class, override at derived class)


    return 0;

}

