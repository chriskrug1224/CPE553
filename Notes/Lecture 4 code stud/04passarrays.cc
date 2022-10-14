#include <iostream>
#include <random>
#include <time.h>
using namespace std;
// variable type default_random_engine
// gen is the name of the variable
// gen takes seed - to make the seed variable we choose time function
default_random_engine gen(time(nullptr)); // remove seed once you are done testing...


void fillRandom(int *a, int n) {
	// uniform_int_distribution is class. distr is object of the class. range of 1-n
	uniform_int_distribution<int> distr(1,n);
	//poisson_distribution<int> distr(1.0); //mean
	//uniform_real_distribution<double> distr(0,5);
	for (int i = 0; i < n; i++)
		// gen is random generator - get random number on the created distr distribution
		a[i] = distr(gen);
}

void print(int x[], int n) {
	for (int i = 0; i < n; i++)
		cout << x[i] << ' ';
	cout << '\n';
}

double mean(const int x[], int n) {
	double s = 0;
	for (int i = 0; i < n; i++)
		s += x[i];
	return s / n;
}

int main() {
	const int SIZE = 10;
	int x[SIZE];

	fillRandom(x, SIZE); // fill array x with SIZE random numbers
	print(x, SIZE); // print out the array
	cout << mean(x, SIZE) << '\n';
}
// create array of random numbers
// print array
// create mean
