// friend function
// friend class
#include <string>
#include <iostream>
using namespace std;

class Course
{
private:
	int code;
	int hours;

public:
	Course() {}
	Course(int c, int h=2){
	    setCode(c);
	    setHourse(h);
	}
	~Course(){}

	void setCode(int c){
	    code = c > 0? c:0;
	}
	void setHourse(int h){
	    hours = h > 0? h:0;
	}
	int getCode(){
	    return code;
	}
	void print() {
		cout << "Code: " << code << ", Hours: "<< hours << endl;

	}
};

class Teacher
{
private:
	Course *cArr[20];
	int count;

public:
	Teacher() {count = 0;}
	~Teacher(){}

	void AddCourse(Course *pc) {
		cArr[count] = pc;
		count++;
	}

	void DropCourse(int code) {
	    for (int i = 0; i<count; i++){
	        if( cArr[i]->getCode()== code){
                  cArr[i] = cArr[count-1];
                  cArr[count-1]- NULL;
                  count --;

	        }


	    }

	}


	void print() {
		cout << "Count: " << count << ","<< endl;
		for (int i =0; i< count; i++){
            cArr[i]->print();
		}
    }
};


int main()
{

   Course c1(100, 1);
   Course c2(200);
   Course c3(300, 3);
   Course c4(400, 4);

   Teacher t1;
   t1.AddCourse(&c1);
   t1.AddCourse(&c2);
   t1.AddCourse(&c3);
   t1.AddCourse(&c4);

   t1.print();

   t1.DropCourse(200);
   t1.print();




}
