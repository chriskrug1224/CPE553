//multi-inhertiance

#include <iostream>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

class Employee
{
private:
    string name;
    string job;
    float salary;
public:
    Employee(string n, string j, float s){
        name = n;
        job = j;
        salary = s;
    }
    void set_name(string n){
        name = n;
    }
    void set_job(string j){
        job = j;
    }
    void set_salary(float s){
        salary = s;
    }
    string get_name(){
        return name;
    }
    string get_job(){
        return job;
    }
    float get_salary(){
        return salary;
    }
    void display(){

        cout << "Name= " << name << " job= " << job << " salary= " << salary << endl;

    }
};
class Student
{
private:
    string name; // problem
    string department;
    string research_interest;

public:
    Student(string d, string ra){
        department = d;
        research_interest = ra;
    }
    void set_name(string n){
        name = n;
    }// problem

    void set_department(string d){
        department = d;
    }
    void set_research_interest(string ra){
        research_interest = ra;
    }
    string get_department(){
        return department;
    }
    string get_research_interest(){
        return research_interest;
    }

    void display(){

        cout << "Name= " << name << " department= " << department << " research_interest= " << research_interest << endl;

    }
};

class TeachingAssistat: public Student, public Employee
{

public:
    TeachingAssistat(string n, string j, float s, string d, string ra):Employee(n,j,s) , Student(d,ra){
    }

    void display(){

        Employee::display();
        Student::display();

    }

};

int main() {

   TeachingAssistat ta("John", "TA", 5000, "IS", "DataScience");
   // call employee & student constructor
   ta.set_salary(7000);
   ta.set_research_interest("Database");
   ta.display();
    //ta.set_name("Bogo");// ambigous

   ta.Employee::set_name("Lily");
   ta.Student::set_name("yy");

   //
   ta.display();

}
