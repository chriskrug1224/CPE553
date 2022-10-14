#include <iostream>
#include <sstream>
#include <fstream>
using namespace std;

// fstream is needed to deal with file
//  three classes inside fstream 1) ifstream (read)  2) ofstream (write) 3)fstream (read & write)
int main() {
    //ifstream read from file
    //method 1 how to read from file
    /*ifstream f("vec.txt");
	string lineBuf;
	//method to loop across the file contents
	while (getline(f, lineBuf)) {
		istringstream line2(lineBuf);
		double x,y,z;
		line2 >> x >> y >> z;
		cout << x << ',' << y << ',' << z << '\n';
		cout << "++++++" << endl;
	}
	f.close();
	*/
	cout << "=========" << endl;

	//method 2 how to read from file
	ifstream f2("vec.txt");
	f2.open("vec.txt");
	cout << f2.rdbuf(); // read buffer - read everything in the file
	f2.close();

    cout << endl << "=========" << endl;
    // ofsteam write into file
	//method 1 how to write into file
	ofstream out("test.dat");
	out << "hello";
	out << 5 + 2 << '\n';
	out.close();

	//method 2 how to write into file
	ofstream out2;
	out2.open("test2.dat");
	out2 << "hello" << endl;
	out2 << 2+4;
	out2.close();

	// fstream
	//method 1 read from file is the default of fstream
	fstream f3;
	f3.open("vec.txt");
	cout << f3.rdbuf(); // read buffer - read everything in the file
	f3.close();

	//method 2 write into file
	fstream f4;
	f4.open("vec.txt",ios::out|ios::app); // mode ios::out|ios:app is used for appendix to do write
	//f4.open("vec.txt",ios::out); // delete everything in the file and start to write fresh
	f4 << endl << "this is from fstream2";
	f4.close();

}

// istringstream class is included in the header file sstream
// line2 is just object name of the class istring
// https://www.youtube.com/watch?v=KUx9YfHkllk (with user input)
// close file is missing on the code
