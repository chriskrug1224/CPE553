#include <iostream>
#include <cmath>  // double sin(double), double cos(double)
#include <fstream>
#include <cstdlib>
#include <string>
#include "functionWind.h"
#include "functionPrime.h"

using namespace std;

// const for pi
const double pi = 3.14159265358979323846;

int main() {
    cout << "###########" << endl;
    cout << "Problem One" << endl;
    cout << "###########" << endl;
    // For problem one, you only need to write your code in "functionPrime.cpp"

    isPrime(19);
    cout << '\n';

    isPrime(81);// trial divide, 81%3 == 0 therefore not prime
    cout << '\n';

    isPrime(57) ; // 57 % 2, 57% 3, 57%4
    cout << '\n';

    cout << "====[ end ]====" << endl;

    cout << "###########" << endl;
    cout << "Problem Two" << endl;
    cout << "###########" << endl;
    // For problem Two, you will need to write your code here
    // first read file robotpath.dat and name it thefile by using ifstream
    // make sure you use the full path to .dat file, e.g., .././src/robotpath.dat
    ifstream thefile;
    thefile.open("../robotpath.dat");

   /* if (thefile.fail()){
        cout << "Error opening the file" << endl;
    }
    */
    //check if thefile exist or not
    if (thefile.is_open()){

        cout << "File is open and ready" << '\n';
        cout << " " << '\n';

    }else{
        cout << "File not found!" << '\n';
        cout << " " << '\n';
    }

    double r, theta, radian, x, y;
    while ( !thefile.eof() ) {
        cout.precision(8);
        thefile >> r >> theta;
        radian = theta * (M_PI / 180);
        cout << "Distance: " << r << " | Angle (in degrees): " << theta <<" | Angle (in radians): " << radian << endl;
        x = r * cos(radian);
        y = r * sin(radian);
        cout << "Cartesian coordinates | x: " << x << " and y: " << y << endl;
        r = sqrt((pow(x, 2) + pow(y, 2)));
        theta = atan2(y, x);
        cout << "Polar radius converted again: " << r << endl;
        cout << "Angle converted again (in radians): " << theta << endl;
    }

    // define your variables each line r and theta from the polar coordinates
    // use defined constant pi value in your calculation
    // start reading file and do calculation


    // while reading print the following for each line:
    //  - print distance and angle
    //  - print angle in radian, 1 degree is equal (pi/180degree)
    //  - print x and y location
    //  - check your conversion and print angle in rad after finding x and y with cartesian coordinates conversion
    // don't forget to close your opened file

    thefile.close();
    cout << "====[ end ]====" << endl;

    cout << "###########" << endl;
    cout << "Problem Three" << endl;
    cout << "###########" << endl;
    //Write your code here
    // before you write here, write windChillFactor  in "functionWind.cpp"

    // use Boolean CanRun to decide to do calculation or not based on condition
    bool canRun;
    // define your input value and other variable
    double windSpeed;
    double tempF;
    // print out message to enter wind speed and take the input
    // Check if speed meet condition
    cout << "Please input your wind speed in mph (must be above 3): " << endl;
    cin >> windSpeed;


    // print out message to enter temperature and take the input
    // check if temperature  meet condition
    cout << "Please input your temperature in F (must be at or below 50): " << endl;
    cin >> tempF;

    // check if all condition is met and use canRun to start calculation of wind chill
    // print out the value
    if (windSpeed > 3 && tempF <= 50)
    {
        cout << "The wind chill factor is :" << windChillFactor(windSpeed, tempF) << endl;
    }
    else {
        cout << "Conditions were not met to calculate. Sorry!" << endl;
    }



    cout << "====[ end ]====" << endl;

    return 0;
}
