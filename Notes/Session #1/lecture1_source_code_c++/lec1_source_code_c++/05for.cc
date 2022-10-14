#include <iostream>
#include <cstdint>
using namespace std;

// introduction to for loop statements -
// introduction to increment and decrement (pre and post)
int main()
{
  for (int i = 1; i < 10; i++)
  {
    cout << i;
    cout << "yo";
  }
  cout << endl << "####1##### "<< '\n';

  for (int i = 1; i <= 10; i++)
    cout << i;
  cout << '\n';
  cout << "#####2#### "<<'\n';

  for (int i = 1; i > 10; i++)
    cout << i;
  cout << '\n';
  //nothing will be printed because the condition is not valid
  cout<<"****3****"<<'\n';

  int x = 1;
  cout<<int(x)<<'\n';
  int8_t i = 1;
  cout << int(i) << "--------------" << endl;
  // int_t ranges is from -128 to 127
  // uint8_t ranges is from 0 to 255
  for (int8_t i = 1; i <= 10; i--)
    cout << (int)i << " ";
  cout << '\n';
  cout<<"*****4***"<<'\n';

  for (int i = 1; i <= 100; i = i * 2) // 1248163264
    cout << i;
  cout << '\n';
}
