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

#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    
    
    int num1 = 100; /*عدد صحيح*/
    int num2 = 453;
    int num3 = 433;
    int num4 = 0;
  //int num5 = "mugdad"; //error
    int num6 = false;
    cout<<num1<<endl;
    cout<<num2<<endl;
    cout<<num3<<endl;
    cout<<num4<<endl;
    cout<<INT_MIN<<endl;
    cout<<INT_MAX<<endl;
    cout<<sizeof(float)<<endl;
    cout<<sizeof(double)<<endl;
    cout<<sizeof(bool)<<endl;
    cout<<sizeof(int)<<endl;
    int lastnum =10.5;
    cout<<lastnum<<endl;

    return 0;
}
