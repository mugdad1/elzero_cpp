/*



age application


*/
#include<iostream>
int main(){
    using namespace std;
    cout<<"================================================\n";
    cout<<"==============calc our age dude================\n";
    cout<<"================================================\n";
    int age;
    cout<<"enter your age:";
    cin>>age;
    int age_in_days = age * 365;
    int age_in_hours = age_in_days * 24;        
    int age_in_minutes= age_in_hours*60;

    cout<<"age in days is "<<age_in_days<<'\n';
    cout<<"age in hours is "<<age_in_hours<<'\n';
    cout<<"age in minutes is "<<age_in_minutes;





}