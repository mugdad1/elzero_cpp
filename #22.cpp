/*
  Primitive Data Types
  - Modifiers
  --- Modify The Length Of Data => See Limits

  ----- ٍSigned [int, char]
  -------- Store Positive, Negative Integers And 0
  -------- int Is Signed By Default

  ----- Unsigned [int, char]
  -------- Store Positive Only

  ----- Short [int]
  -------- Can Be short Instead of short int

  ----- Long [int, double]
  -------- Store Maximum Value
  -------- Can Be long Instead of long int

  - Type Alias
  --- using identifier = type;
  --- typedef unsigned long UL;

*/

#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    int age = 150;
    cout << sizeof(age)<<"\n"; //4 byte
    short int age1 = 150;
    cout << sizeof(age1)<<"\n"; //4 byte
    long int age2 = 150;
    cout << sizeof(age2)<<"\n"; //4 byte
    return 0;




}
  