// Inheritance.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Student.h"
#include "PostGraduateStudent.h"
#include <iostream>
#include <string>

int main()
{
    Student s1;
    // re-usablity of the code using inheritiance
    s1.display();
    s1.set_age(30);
    s1.set_name("Dong");
    s1.set_gender("male");
    
    // call default constructor of base class (derived class has no constructor
    s1.display();
    s1.set_depart("ECE");
    s1.set_GPA(3.5);
    
    
    // call non-default constructor - order of constructors calling
    Student s2("Matt", "Male", 25, 5, 3.5, "ECE");
    
    // call display function -> function over-ridding
    s2.display(); // s2 has a display function - in this case ignore display in parent 
    std::cout << "Hello World!\n";

    //multi-inheritance (grand - parent - child)
    PostGraduateStudent ps ("Dave", "Male", 20, 7, 3.9, "ECE", "Nano_Tech");
    ps.display();
    
    
    
}
