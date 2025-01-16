#include <iostream>
#include <iomanip>

int main() {
    using namespace std;

    // Display float and double values
    cout << setprecision(13);
    double fl = 10.1234567891; // Changed to double for better precision
    cout << "Float value: " << fl << "\n";
    double dob = 10.1234567891;
    cout << "Double value: " << dob << "\n";

    // Display integer and its memory address
    auto num = 10;
    cout << "Integer value: " << num << "\n";
    int nums = 100;
    cout << "Memory address of nums: " << &nums << "\n";

    // User input for kilobytes
    int byte;
    int bits;
    int kilobytes;
    cout << "Enter the number of kilobytes: ";
    cin >> kilobytes;

    // Calculate bytes and bits
    byte = kilobytes * 1024;
    bits = byte * 8;
    cout << "Number of bytes: " << byte << "\n";
    cout << "Number of bits: " << bits << "\n";
    cout << "Nice!\n";

    return 0;
}
