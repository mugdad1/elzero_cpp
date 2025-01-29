/*
  Primitive Data Types
  - int => Integer
  --- Test Numbers
  --- Test Floating Point vs Int
  --- Store From -2147483648 To 2147483647
  --- INT_MIN and INT_MAX Constants
  --- Check Limits Header File limits.h
  --- Test Size Of Data Types Without Variables & Use End Line

  - = Assignment Operator
*/

#include <cmath>
#include <iomanip>
#include <iostream>

using std::setw;
using namespace std;

int main() {

  cout << sizeof(float) << endl;
  cout << sizeof(double) << endl;
  cout << sizeof(bool) << endl;
  cout << sizeof(int) << endl;
  cout << sizeof(char32_t) << endl;
  cout << sizeof(short int) << endl;
  int a;
  int b;
  int c;
  float f;
  float f1;
  float f2;
  a = 10;
  b = 20;
  cout << "enter f 1 and f2 to devide" << endl;
  cin >> f1 >> f2;
  c = a + b;
  f = f1 / f2;
  cout << c << endl;
  cout << f << endl;
  double balance[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};
  int n[10]; // n is an array of 10 integers
  // initialize elements of array n to 0
  for (int i = 0; i < 10; i++) {
    n[i] = i + 100; // set element at location i to i + 100
  }
  cout << "Element" << setw(13) << "Value" << endl;
  // output each array element's value
  for (int j = 0; j < 10; j++) {
    cout << setw(7) << j << setw(13) << n[j] << endl;
  
  }
  
  
  
  
  /*
  int a[5][2] = {{0, 0}, {1, 2}, {2, 4}, {3, 6}, {4, 8}};
  // output each array element's value
  for (int i = 0; i < 5; i++)
    for (int j = 0; j < 2; j++) {
      cout << "a[" << i << "][" << j << "]: ";
      cout << a[i][j] << endl;
    }
*/
  return 0;
}
