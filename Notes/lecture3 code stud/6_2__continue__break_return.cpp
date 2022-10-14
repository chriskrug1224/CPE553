
/* ----------------------------------------------------------------- */



/* ----------------------------------------------------------------- */

#include <iostream>
using namespace std;

void dummy ()
{
	// function: return
	// loops(for, while ...etc): continue, break

	// i: 0 1 2 3 4

	// expected output:
	// 1- continue: skip the current iteration
	// start eman eman eman hosam

	// 2- break: go out of the loop
	// start eman hosam

	// 3- return: go out of the function
	// start eman

	cout << "start ";
	for (int i = 0; i <= 4; i++)
	{
		// % : mod
		// &&, ||: short circuit
		if (i % 2 != 0) // odd
			continue;   // try to change it to: "break" then "return"
		                // and in each case, re-run
		                // and see the difference of the printed output

		cout << "eman ";
	}
	cout << "hosam" << endl;
}


int main()
{
	dummy(); // don't forget to call it :D

	char c;
	cin >> c;
}
