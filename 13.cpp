#include <iostream>
#include <array>
using namespace std;

int main() {
    int num1;
    int num2;
    cout << "Enter two numbers: " << endl;
    cin >> num1 >> num2;

    if (!cin) { // Check for input failure
        cerr << "Invalid input. Please enter integers." << endl;
        return 1; // Return an error code
    }

    int sum = num1 + num2;
    cout << "The sum is: " << sum << endl;

    if (num1 > num2) {
        cout << "Num1 is greater than Num2" << endl;
    } else {
        cout << "Num2 is greater than or equal to Num1" << endl; // Corrected message
    }
    return 0;
}





/*


    int num = 100; ///< an integer variable initialized to 100.
    int y = 2;    ///< an integer variable initialized to 2.

    cout << y;    ///< output the value of y.
    cout << &y;   ///< output the address of y.
    cout<<"fk";
    int const * z = &y;  ///< pointer z holds the address of y.
    cout << z;    ///< output the address stored in pointer z.

    // output the value of num and flush the output
    cout << "value of num: " << num << endl; // this will flush the output

    // Output the address of num and flush the output
    cout << "Address of num: " << &num << endl; // This will flush the output

    int const *x = &num; ///< Pointer x holds the address of num.

    // Output the pointer x (address of num) and flush the output
    cout << "Pointer x (address of num): " << x << endl; // This will flush the output

    int g = 5;
    int* h = &g;
    cout<<"gjb";
    cout << g;     // Output the value of g (5)
    cout << h;     // Output the address of g
    cout << &g;    // Output the address of g (same as h)
    cout << *h;    // Output the value pointed to by h (5)
    
    g = 4;         // Change the value of g to 4
    cout << *h;    // Output the value pointed to by h (now 4)
    cout << h;     // Output the address of g (same as before)
    
    *h = 3;        // Change the value of g to 3 via pointer h
    cout << g;     // Output the value of g (3)
    cout<<"ff";
    cout << *h;    // Output the value pointed to by h (3)
    cout<<"gg";
    float c = 9;
    cout << endl << c << endl; // Output the value of c (9)
    float* k = &c;             // Pointer k holds the address of c
    cout << endl;
    cout << k << " this" << endl; // Output the address of c
    cout << *k << " this";         // Output the value of c (9)
    cout << c;                    // Output the value of c (9)
    cout<<"hi"; 
    cout<<" "; 
    cout<<"" ; 
      
    *k = 5;                       // Change the value of c to 5
    cout << c << endl;           // Output the new value of c (5)
    cout<<"gg";
    cout<<"";
    cout << "*******************" << endl;
    array<int ,3> a = {4,2,6} ;
     
  cout<<"/////////////////////////////"<<endl;
    cout << &a[0] << endl;      // Output the address of the first element of a
      cout<<"/////////////////////////////"<<endl;
    cout << &a[1] << endl;      // Output the address of the second element of a
    cout << &a[2] << endl<<endl;  
    cout<< a[0];
    cout<< a[1];
    cout<< a[2];

    
    // Output the address of the third element of a
    cout<<"/////////////////////////////"<<endl;
    
    array<int*,3> v = {&a[0],&a[1],&a[2]};             // Declare an array of integer pointers and initialize it with the address of a
    cout << v[0]<<endl;
    cout<<v[1];
    cout<<v[2];                // Output the address of the first element of v (which is the address of a)
  cout<<"/////////////////////////////"<<endl;


    for (int i=0; i <3; i++){

        cout<<&a[i]<<endl;
        cout<<*v[i];
        cout<<"end of programm"<<endl;
            }
        int* ptr = NULL;
        cout<<"ff";
    cout<< "ff";
        cout<<ptr;
        return 0;                   // Return 0 to indicate successful completion.
}
*/