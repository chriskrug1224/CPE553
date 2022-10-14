#include <iostream>
#include <string>
using namespace std;
/*
Create Car class with the following attributes:
Model (int)
Color (string)
Manufacture (string)
Create 3 different objects use setters and getters
Create static counter data member and static function that can print the number of created objects
*/
class Car
{
private:
  int Model;
  string Color;
  string Manufacturer;
  static int count;
public:
  Car()
  {
    Model = 0;
    count++;
  }
  void setManufacture(string m) {
    Manufacturer = m;
  }
  string getManufacture() {
    return Manufacturer;
  }

  void setModel(int n) {
    Model = n;
  }
  int getModel() {
    return Model;
  }

  void setColor(string c) {
    Color = c;
  }
  string getColor() {
    return Color;
  }
  static int totalObjects(void)
  {
    return count;
  }
  ~Car() {
    count--;
  }
};
int Car::count = 0;
int main()
{
  Car c1;
  Car c2;
  Car c3;

  c1.setManufacture("Toyota");
  c1.setModel(2020);
  c1.setColor("Red");

  cout << "The Manufacture is: " << c1.getManufacture() << endl;
  cout << "The Model is: " << c1.getModel() << endl;
  cout << "The Color is: " << c1.getColor() << endl;


  c2.setManufacture("Honda");
  c2.setModel(2019);
  c2.setColor("Red");

  cout << "The Manufacture is: " << c2.getManufacture() << endl;
  cout << "The Model is: " << c2.getModel() << endl;
  cout << "The Color is: " << c2.getColor() << endl;

  c3.setManufacture("BMW");
  c3.setModel(2000);
  c3.setColor("Silver");

  cout << "The Manufacture is: " << c3.getManufacture() << endl;
  cout << "The Model is: " << c3.getModel() << endl;
  cout << "The Color is: " << c3.getColor() << endl;

  //printing object count 
  cout << "Total objects created: " << Car::totalObjects() << endl;
  return 0;
}