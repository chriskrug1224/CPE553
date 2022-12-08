
#include <iostream>
using namespace std;

class Employee {
    protected: // better than private why?
        string name;
        int emp_ID;
        float salary;
    public:
        Employee():name("unknown"), emp_ID(0), salary(0.0) {//overloading
        }
        Employee(string n, int id, float s) {
            name = n;
            emp_ID = id;
            salary = s;
        }
        virtual float get_Total_salary() = 0;//(abstract class)pure virtual func
        virtual void print() {
            cout << "Name = " << name << " Emp_ID = " << emp_ID << " Salary = " << salary << endl;
        }
};
class Sales :public Employee {
    private:
        float gross_sales;
        float comission_rate;
    public:
        Sales(string n, int id, float s, float gs, float cr) :Employee(n, id, s) {
            gross_sales = gs;
            comission_rate = cr;
        }
        float get_Total_salary() {//pure virutal (must be implemented in derived class)
            return (salary + gross_sales * comission_rate);
        }
        void print() { // function overloading (implementation is not necessarily)
            Employee::print(); //function overloading (re-usaablility)
            cout << "Gross Sales = " << gross_sales << "Commission = " << comission_rate << endl;
        }

};
class Engineer :public Employee {
    private:
        string speciality;
        int experience;
        int overtime_hours;
        float overtime_hour_rate;
    public:
        Engineer(string n, int id, float s, string sp, int e, int oh, int ohr) :Employee(n, id, s) {
            speciality = sp;
            experience = e;
            overtime_hours = oh;
            overtime_hour_rate = ohr;
        }
        float get_Total_salary() {//pure virutal (must be implemented in derived class)
            return (salary + overtime_hours * overtime_hour_rate);
        }
        void print() { // function overloading (implementation is not necessarily)
            Employee::print(); //function overloading (re-usaablility)
            cout << "Speciality = " << speciality << "Experience = " << experience << " Over Time Hour : " << overtime_hours << " overtime hour rate : " << overtime_hour_rate << endl;
        }



};


int main()
{
    std::cout << "Hello World!\n";
    //polymorphism
    Employee* emp_ptr;
    Sales s1("Lily", 120, 5000, 50000, 0.10);
    Engineer e1("Mark", 150, 7000, "SW engineer", 5, 10, 50);

    emp_ptr = &s1;
    emp_ptr->get_Total_salary();
    emp_ptr->print();

    emp_ptr = &e1;
    emp_ptr->get_Total_salary();
    emp_ptr->print();

    return 0;
}

