#include "functionSum.h"

using namespace std;
//Test comment
/*
Problem1:
=========

Write C++ code that sum the numbers from 1 to 100

Problem2:
=========

a. Write C++ code that sum reciprocals (1/1 + 1/2 + … + 1/99 + 1/100)
b. Write C++ code that sum reciprocals (1/100 + 1/99 + ... 1/2 + 1/1)

compare a and b

Problem3:
=========
a. Write C++ code that sum multiplication reciprocals (1/1*1 + 1/2*2 + … ) \
b. Write C++ code that sum reciprocals (1/100*100 + 1/99*99 + ... )

*/


int sumUpTo(int x) {
  //write your code here
  int total = 0;
  for (int i = 0; i <= x;i++)
  {
    total += i;
  }
  return total;
}

float sumReciprocalNormal(int x) {
  //write your code here
  float total = 0;
  for (float i = 1; i < x;i++)
  {
    total += (1 / i);
  }
  return total;
}

float sumReciprocalRev(int x) {
  //write your code here
  float total = 0;
  for (float i = x; i > 0; i--)
  {
    total += (1 / i);
  }
  return total;
}

float sumMysteryNormal(int x) {
  //write your code here
  float total = 0;
  for (float i = 1; i < x;i++)
  {
    total += (1 / (i * i));
  }
  return total;
}

float sumMysteryRev(int x) {
  //write your code here
  float total = 0;
  for (float i = x; i > 0; i--)
  {
    total += (1 / (i * i));
  }
  return total;
}

