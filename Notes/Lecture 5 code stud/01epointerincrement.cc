//done
#include <iostream>
using namespace std;

int main() {
	//               P
	int x[] = {1, 3, 5, 9, 2, 7};
	int y[10] = {5, 3, 2};
	int* p = &x[2]; //p=> x[2]
    int a;

    *++p = -2; // p-> x[3], x[3] = -2 |
    cout << a << " "<<  x[2] << " " << x[3] << endl; //0 5 -2
    // x[] = {1, 3, 5, -2, 2, 7}

	//cout << ++*p << endl; // read data -2 + 1 = -1
	a = ++*p; //p=> x[3],  x[3] = x[3] + 1 = -2 + 1 = -1 ->  a=-1 -> x[3] = -1, p=> x[3]
	cout << a <<" " << x[2] << " " << x[3] << endl;
    // x[] = {1, 3, 5, -1, 2, 7}


	a = (*p)++; //p=> x[3],  a = -1, -> x[3] = -1 +1 = 0, p=> x[3]
    cout << a << " "<< x[2] << " " << x[3] << endl;
    // x[] = {1, 3, 5, 0, 2, 7}


    *p++ = 5;  // *p = 5 -> x[3]=5; p++; p-> x[4]
    cout << *p << " "<< x[2] << " " << x[3] << endl;
    // x[] = {1, 3, 5, 5, 2, 7}

	int z[5] = {6, 1, 8}; // 6 1 8 0 0
	cout << z[0] << " " <<z[1] << " " <<z[2] << " " <<z[3] << " " <<z[4] << " " << endl;
	p = z + 1; // p points to z[1] which is 1 - p-> z[1]
	*p++ = 9; // *p = 9  p = &z[2 ] -> 6 9 8 0 0
	*--p = 5; // --p p=&z[1]  *p = 5 -> 6 5 8 0 0 , p-> z[1]
	cout << z[0] << " " <<z[1] << " " <<z[2] << " " <<z[3] << " " <<z[4] << " " << endl;
	++*p;  // *p is z[1]
	cout << z[0] << " " <<z[1] << " " <<z[2] << " " <<z[3] << " " <<z[4] << " " << endl;

    float w[5] = { 3, 5, 7};
	float *fp = w;

	for (int i = 0; i < 4; i++)// 1.5 2.5 3.5 0 0
        *fp++ /= 2;
	cout << w[0] << " " << w[1]  << " " << w[2] << " " << w[3] << " " <<w[4]<< " " << endl;
    //cout << *--fp << " "<< *--fp << " "<< *--fp << " "<< *--fp << " "<< *--fp <<  endl;
	for (int i = 0; i < 5; i++)// 1.5 1.5 2.5 -1 0
	   *--fp -= 1; // *--fp = *--fpp - 1
    cout << w[0] << " " << w[1]  << " " << w[2] << " " << w[3] << " " <<w[4]<< " " << endl;
    //cout << *++fp << " "<< *++fp << " "<< *++fp << " "<< *++fp << " "<< *++fp <<  endl;

    for (int i = 0; i < 4; i++)// 1.5 1.5 7.5 -3 0
	  *++fp *= 3;
    cout << w[0] << " " << w[1]  << " " << w[2] << " " << w[3] << " " <<w[4]<< " " << endl;
}
