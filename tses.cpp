#include <iostream>
using namespace std;
 
int add(int, int);
 
int main() 
{
   int input1, input2, sum;
  
   cout<< "Enter two integer values: ";
   cin>> input1 >> input2;
    
   sum = add(input1, input2);
    
   cout<< "Sum of two integer input is: " << sum;
    
   return 0;
}
 
int add(int n1, int n2)
{
     return n1 + n2;
}