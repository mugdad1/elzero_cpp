/*
  Primitive Data Types
  - float => Floating Point Number
  --- Test Integer Value In Float Variable
  --- We Make Sure Its Float Not Double By Adding Suffix "f" Or "F"
  --- Test With Auto
  --- 7 Decimal Precision

  - double => Double The Float
  --- 15 Decimal Precision
*/
#include <iostream>
int main(){
    using namespace std;
     int num = 10;
  num = 20.5;
  cout << sizeof(num) << endl; // 4
  cout << num << endl;         // 20

  double dob = 10;
  dob = 20.5;
  cout << sizeof(dob) << endl; // 8
  cout << dob << endl;         // 20.5
    float fl = 10.5f + 9.5f;
  cout << sizeof(fl) << endl; // 4
  cout << fl << endl;         // 20

  auto mix = 10.f;


    return 0;
}