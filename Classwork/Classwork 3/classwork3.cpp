#include <iostream>
#include <string>
using namespace std;
/*
Create Car class with the following attributes:
Model (int)
year (int)
Manufacture (string)
Create setters and getters
Create default constructor and default destructor
Create constructor that can set the model, year, manfacture
Create Truck class that public inheritance with the Car
Create constructor of the Truck class – call the car constructor from Truck and assign its members value
*/
class Car
{
private:
  int Model;
  int Year;
  string Manufacturer;
  //static int count;
public:
  Car()
  {
    Model = 0;
    //count++;
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

  void setYear(int y) {
    Year = y;
  }
  int getYear() {
    return Year;
  }
  /*
   static int totalObjects(void)
   {
    return count;
 }
 */
  ~Car() {
    //count--;
  }
};

class Truck : public Car {

};
//int Car::count = 0;
int main()
{
  Car c1;

  c1.setManufacture("Toyota");
  c1.setModel(2020);
  c1.setYear(20);

  cout << "The Manufacture is: " << c1.getManufacture() << endl;
  cout << "The Model is: " << c1.getModel() << endl;
  cout << "The Color is: " << c1.getYear() << endl;

  Truck t1;

  t1.setManufacture("Ford");
  t1.setModel(2022);
  t1.setYear(0);


  cout << "The Manufacture is: " << t1.getManufacture() << endl;
  cout << "The Model is: " << t1.getModel() << endl;
  cout << "The Color is: " << t1.getYear() << endl;

  /*
    //printing object count
    cout << "Total objects created: " << Car::totalObjects() << endl;
    return 0;
  */
}