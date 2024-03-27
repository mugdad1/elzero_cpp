/*
  Data Types

  - Ram [R]andom [A]ccess [M]emory
  --- Computer Memory Has Locations

  - Data Sizes
  --- Bit => [Bi]nary Digi[t] => Smallest Unit in Storage Store Only 0 Or 1
  --- Byte => A Group of 8 => Store Single Character
  --- Kilo Byte => 1024 Byte
  --- Mega Byte => 1024 Kilobytes
  --- Giga Byte => 1024 Megabytes
  --- Tera Byte => 1024 Gigabytes

  - Data Types With Size
  --- int => 2 Or 4 Bytes => Will Cover Later Why
  --- float => 4 Bytes [18.5656565656]
  --- double => 8 Bytes [18.5656565656]
  ------ Number . Fractional Component
  --- char => 1 Byte => "A" "x" "9"
  --- boolean => 1 Byte => true, false
  - Double vs Float

  - The Story Behind Creating A Variable
  --- Declare A Variable
  --- Tell Computer That We Need To Reserve X Bytes Of Memory Depend On Data Type
  --- Restrict Type Of Data To The Type We Choosed

  - Declare Variable Without Type
  - See Memory Address &

  - Application To Create
  --- Create App Ask You To Type Number Of Kilobytes
  --- Write 3 Lines Contains
  ------ [1] The Number Of Kilobytes That User Input
  ------ [2] The Number Of Bytes
  ------ [3] The Number Of Bits
*/
#include <iostream>
#include<iomanip>
int main(){
    using namespace std;
      cout << setprecision(13);
  float fl = 10.1234567891;
  cout << fl << "\n";
  double dob = 10.1234567891;
  cout << dob << "\n";
  auto num = 10;
  cout << num << "\n";
  int nums = 100;
  cout << &nums;
  return 0;
    
   /*
       using namespace std;
    int byte;
    int bits;
    int kilobytes;
    cout<<"enter The Number Of Kilobytes"<<"\n";
    cin>>kilobytes;
    byte = kilobytes * 1024;
    bits = byte* 8;
    cout<<"num of bytes "<<byte<<"\n";
    cout<<"num of bits "<<bits<<"\n";
    cout<<"niiiiiiiiiiiiiiceeeeeeeeee";
   */
    using namespace std;
    int byte;
    int bits;
    int kilobytes;
    cout<<"enter The Number Of Kilobytes"<<"\n";
    cin>>kilobytes;
    byte = kilobytes * 1024;
    bits = byte* 8;
    cout<<"num of bytes "<<byte<<"\n";
    cout<<"num of bits "<<bits<<"\n";
    cout<<"niiiiiiiiiiiiiiceeeeeeeeee";

}