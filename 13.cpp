#include <iostream>
using namespace std;

int main() {
    int num = 100; ///< An integer variable initialized to 100.
    int y = 2;    ///< An integer variable initialized to 2.

    cout << y;    ///< Output the value of y.
    cout << &y;   ///< Output the address of y.

    int* z = &y;  ///< Pointer z holds the address of y.
    cout << z;    ///< Output the address stored in pointer z.

    // Output the value of num and flush the output
    cout << "Value of num: " << num << endl; // This will flush the output

    // Output the address of num and flush the output
    cout << "Address of num: " << &num << endl; // This will flush the output

    int *x = &num; ///< Pointer x holds the address of num.

    // Output the pointer x (address of num) and flush the output
    cout << "Pointer x (address of num): " << x << endl; // This will flush the output

    int g = 5;
    int* h = &g;

    cout << g;     // Output the value of g (5)
    cout << h;     // Output the address of g
    cout << &g;    // Output the address of g (same as h)
    cout << *h;    // Output the value pointed to by h (5)
    
    g = 4;         // Change the value of g to 4
    cout << *h;    // Output the value pointed to by h (now 4)
    cout << h;     // Output the address of g (same as before)
    
    *h = 3;        // Change the value of g to 3 via pointer h
    cout << g;     // Output the value of g (3)
    cout << *h;    // Output the value pointed to by h (3)

    float c = 9;
    cout << endl << c << endl; // Output the value of c (9)
    float* k = &c;             // Pointer k holds the address of c
    cout << endl;
    cout << k << " this" << endl; // Output the address of c
    cout << *k << " this";         // Output the value of c (9)
    cout << c;                    // Output the value of c (9)
    
    *k = 5;                       // Change the value of c to 5
    cout << c << endl;           // Output the new value of c (5)

    cout << "*******************" << endl;

    int a[3] = {6, 1, 7};        // Declare an array a with 3 elements

    cout << &a[0] << endl;      // Output the address of the first element of a
    cout << &a[1] << endl;      // Output the address of the second element of a
    cout << &a[2] << endl<<endl;  
    cout<<"lol"<<endl;
    cout<<a<<endl;
    cout<< a+1<<endl;
    cout<< a + 2<<endl;    
    cout<<"gg";
    cout<<*a;
    cout<<"ggg";
    cout<<*a;
    cout<<a[0];
    cout<<"fff";
    cout<<a[1];
    cout<<*a+1;
    
    
    // Output the address of the third element of a
    cout<<"lol"<<endl;
    int* v[] = {a};             // Declare an array of integer pointers and initialize it with the address of a
    cout << v[0]<<endl;                  // Output the address of the first element of v (which is the address of a)

    return 0;                   // Return 0 to indicate successful completion.
}
