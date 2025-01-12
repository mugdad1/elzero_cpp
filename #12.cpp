/*
 var scope
 global var
 local var
*/
#include <iostream>
using namespace std;
    int a = 100;//global
    int second()
{
    cout<<a<<" coming from second function \n";
    //cout<<b<<" coming from second function \n"; //undefined

    return 0 ;
}

    int main()

{
    int b = 400;
    second();
    cout<<a<<" coming from main function \n";
    cout<<b<<" coming from main function \n";

    return 0;    
    
}
