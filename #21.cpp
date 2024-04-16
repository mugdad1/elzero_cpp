#include <iostream>
void without_value()
{
//nothing to return
}
int main()
{
    
    using namespace std;
    bool is_open = true;
    cout<< is_open + 10<< endl ;    //1+10
    cout<<true + true + false<<endl;//1+1+0=2
    bool test1 = 10>4;              //yes true 1
    bool test2 = 10>100;            //no=> false =>0
    cout <<test1<<endl;
    cout <<test2<<endl;
    int num1 = 1;
    cout <<sizeof (test1)<<endl;
    cout<<sizeof (num1)<<endl;
    bool num = 100;
    bool num2 = 0;
    bool num3 = -100;
    cout<<num;
    cout<<num2;
    cout<<num3;

    return 0;
}