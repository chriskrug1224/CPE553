// introduction to recursive function
// factorial function without recursive and with recursive
// fibonacci series without recursive and with recursive

#include <iostream>
using namespace std;
// x = 5, y = 8
double sumSquares(int x, int y){ //Computes the sum of all squares from x to y
  double sum = 0; //Double stores larger numerical values than int (avoids overflow)
  for (int i = x; i <= y; i++){ // 5*5 + 6*6 + 7*7 + 8*8
    sum += i * i; // sum = sum + i*i
  }
  return sum;
}
// a = 5
double factorial(int a)
{
    double answer = 1;
    for(int i = 1; i <= a; i++)
    {
        answer *= i; // answer = 1*2*3*4*5
    }
    return answer;
}
// n = 5
double factorial2(uint32_t n) {
    if (n <= 1) {
        return 1;
    }

    return n * factorial2(n-1);
}
// fact(5) = 5* fact (4) = 5 * 4 * 3 * 2 * 1
// fact(4) = 4* fact (3) = 4 * 3 * 2 * 1
// fact(3) = 3* fact (2) = 3 * 2 * 1
// fact(2) = 2* fact (1) = 2 * 1
// fact(1) = 1


int fibonacci(int n) {
    // 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...
    int a = 1, b = 0, c;
    for (int i = 0; i < n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}

            //0  1  0
//         -> c  a  b
// i = 0   -> 1  0  1
// i = 1   -> 1  1  1
// i = 2   -> 2  1  2
// i = 3   -> 3  2  3
// i = 4   -> 5  3  5
// i = 5   -> 8  5  8
// i = 6   -> 13  8  13
// i = 7   -> 21  13  21
// i = 8   -> 34  21  34
// i = 9   -> 55 34  55

//recursive with memoization (also called dynamic programming)
double fibo2(int n) {
    if ( n <= 2 ) {
        return 1;
    }
    double memo[200] = {0};
    if (memo[n] != 0)
      return memo[n];

    return memo[n] = fibo2(n-1) + fibo2(n-2);
}
 // fibo2 (5) -> memo[5] = fibo(4) + fibo (3) -> memo[5] = 3 + 2 = 5
 // fibo2 (4) -> memo[4] = fibo(3) + fibo (2) -> memo[4] = 2 + 1 = 3
 // fibo2 (3) -> memo[3] = fibo(2) + fibo (1) -> memo[3] = 1 + 1 = 2
 // fibo2 (2) -> 1
 // fibo2 (1) -> 1
 // fibo2 (0) -> 1

 // use of static help to improve the performance by keep the fib return array saved in memory heap with access by all the recursive function
 // what is the difference between static (change - sharable) and constant (initialization - no change)

int main() {
    cout << sumSquares(5, 8) << '\n';
    cout << factorial(5) << '\n'; // no recursive
    cout << factorial2(5) << '\n';//new (recursive)
    cout << fibonacci(5) << '\n';//loop
    cout << fibo2(200) << '\n';//recursive
    cout << fibo2(200) << '\n';//recursive
    //cout << fibo2(20) << '\n';//recursive
    //cout << fibo2(30) << '\n';//recursive
    //cout << fibo2(40) << '\n';//recursive
    //cout << fibo2(50) << '\n';//recursive
}
