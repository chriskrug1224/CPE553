#include <iostream>
#include <fstream>
#include <vector>
#include <math.h>

using namespace std;


// -------------- Design your Shape class here ---------------
// -----------------------------------------------------------
// Shape abstract class with private double variable x and y that indicate shape position
// make the following functions
//  1. Constructor shape (x, y)
//  2. function area take no parameters return double const  equal zero
//  3. function draw take ostream file return void  equal zero
//  4. make deconstruct ~Shape
class Shape {
private:
    double x, y;
public:
    Shape() {
        x = 0;
        y = 0;
    }

    Shape (double X, double Y) {
        x = X;
        y = Y;
    }

    virtual double area() const = 0;

    virtual void draw (ostream &ostr) = 0;

    virtual ~Shape() = default;
};

// -------------- Design your Circle class here ---------------
// -----------------------------------------------------------
// Class Circle inherit Class Shape
// private variable x, y, radius
// Make the following functions:
// Circle constructor that take x, y, radius, Note that x and y are assigned to Shape(x,y)
//  for example constructor_name(double x, double y) : Shape(x,y)
// draw that take ostream file to write postscript instruction the function return void
//   postscript:
//    x y radius  0  360  arc \n
//    stroke \n
// for example for x = 200 pixels, y = 3 pixels, and radius 100 pixels. then your function should write this in test.ps
// stroke
// 200 300 100 0 360 arc
// area take no parameters and return double
// ~Circle deconstruction
class Circle : public Shape {
private:
    double x, y, radius;

public:
    Circle(double X, double Y, double r) : Shape(x, y) {
        radius = r;
        x = X;
        y = Y;
    }

    double area() const override {
        cout << "Area of a circle: " << M_PI*radius*radius << endl;
        return M_PI*radius*radius;
    }

    void draw(ostream &ostr) override {
        ostr << x << " " << y << " " << radius << " 0 360 arc\nstroke" << endl;
    }

    ~Circle() {}
};

// -------------- Design your Rect class here ---------------
// -----------------------------------------------------------
// Class Rect inherit Class Shape
// private variable x, y, width, and height
// Make the following functions:
// Rect constructor that take x, y,  width,  height
// draw that take ostream file to write postscript instruction the function return void
// draw that take ostream file to write postscript instruction the function return void
//   postscript:
//    x y moveto \n
//    x+w y lineto \n
//    x+w y+h lineto \n
//    x y+h lineto \n
//    closepath \n
//    stroke \n
// area take no parameters and return double
// ~Rect deconstruction
class Rect : public Shape {
private:
    double x, y, width, height;
public:
    Rect(double X, double Y, double w, double h) : Shape(x, y) {
        width = w;
        height = h;
        x = X;
        y = Y;
    }

    double area() const override {
        cout << "Area of a rect: " << width * height << endl;
        return width*height;
    }

    void draw(ostream &ostr) override {
        ostr << x << " " << y << " " << width << " " << height << " rectstroke\nstroke" << endl;
    }

    ~Rect() {}

};

// -------------- Design your FilledRect class here ---------------
// -----------------------------------------------------------
// Class FilledRect inherit Class Shape
// private variable x, y, width, and height
// Make the following functions:
// FilledRect constructor that take x, y,  width,  height
// draw that take ostream file to write postscript instruction the function return void
//   postscript:
//    x y moveto \n
//    x+w y lineto \n
//    x+w y+h lineto \n
//    x y+h lineto \n
//    closepath \n
//    fill \n
// area take no parameters and return double
// ~FilledRect deconstruction
class FilledRect : public Shape {
private:
    double x, y, width, height;
public:
    FilledRect(double X, double Y, double w, double h) : Shape(x, y) {
        width = w;
        height = h;
        x = X;
        y = Y;
    }

    double area() const override {
        cout << "Area of a filled rect: " << width*height << endl;
        return width*height;
    }

    void draw(ostream &ostr) override {
        ostr << x << " " << y << " " << width << " " << height << " rectfill\nstroke" << endl;
    }

    ~FilledRect() {}

};

// -------------- Design your Drawing class here ---------------
// -----------------------------------------------------------
// private variables ofstream and vector<shape*>
// Make the following functions:
// Drawing constructor as following (is given):
//  Drawing(string filename) : f(filename.c_str()), shapes() {} // where f is ofstream
// void add that take shape and push_back to vector
// void draw take no parameters and loop inside vector to rum draw function for each shape class
// void showArea take no parameters and loop inside vector to run area function for each shape class
// void setrgb take three double for red, green, and blue and write postscript line to change color
//   postscript:
//    r_value g_value b_value setrgbcolor \n
class Drawing {
private:
    ofstream ostr;
    vector<Shape*> Polymorphism;
public:
    Drawing(string filename) : ostr(filename.c_str()), Polymorphism() {}

    void add(Shape *shape) {
        Polymorphism.push_back(shape);
    }

    void draw() {
        for (int i=0; i<Polymorphism.size(); i++) {
            Polymorphism[i]->draw(ostr);
        }
    }

    void showArea() {
        for (int i=0; i<Polymorphism.size(); i++) {
            Polymorphism[i]->area();
        }
    }

    void setrgb(double r, double g, double b) {
        ostr << r << " " << g << " " << b << " setrgbcolor" << endl;
    }
};

int main() {
    cout << "########" << endl;
    cout << "Main Problem" << endl;
    cout << "########" << endl;

    // set path to create .ps file to write postscript instructions
    Drawing d("C:\\Users\\maria\\Desktop\\CPE 553\\Homework\\seven-chriskrug1224\\sheet.ps");
    // set color
    d.setrgb(1,0,0); // set drawing color to be bright red:  1 0 0 setrgbcolor
    // add FilledRect
    d.add(new FilledRect(100.0, 550.0, 200.0, 50)); // x y moveto x y lineto ... fill
    // add Rect
    d.add(new Rect(200.0, 650.0, 200.0, 50));       // x y moveto x y lineto ... stroke
    // add Circle
    d.add(new Circle(300,300, 100)); // centered in 300 , 300 pixel with radius
    // draw all shapes added to d
    d.draw();
    // print out all shapes area
    d.showArea();

    cout << "====[ end ]====" << endl;
    cout << "               " << endl;

    return 0;
}