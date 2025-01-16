/*
  Data Types
  - What Is Data ? بيانات 
  - Data Examples In Real Life
  --- Integer => 5000, 10, -100
  --- String => "Elzero Web School", "Osama Elzero", "100A"
  --- Boolean => true, false
  --- Float => 18.5, 1900.50
  --- Array => ["Osama", "Ahmed", "Sayed", "Mahmoud"]
  - Why We Choose Data ?
  --- Size
  --- Operation

  What Is Operand ?
  - The Part Of an Instruction Representing The Data Manipulated by The Operator
*/
/*
mugdad(string)
18.5(double||float)
yes / true etc(boolean)
"100"(int)




*/

#include <iostream>
using namespace std;

int main()
{
int num= 0;
string name = "m";
bool status = true;
int num1 = 100;
int num2 = 50;
cout<<sizeof (num)<<"\n" ;
cout<<sizeof (name)<<"\n";
cout<<sizeof (status)<<"\n";
cout<< num1/num2;//can't divide int with string
int num3;
cout<<"enter num 3 "<<endl;
cin >> num3;
cout<< num3;


}
    