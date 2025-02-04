#include <iostream>
#include <string>
using namespace std;

// Struct to represent a Student
struct Student {
    string name;  // Student's name
    int age;      // Student's age
    int score;    // Student's score
    bool sex;     // true for male, false for female
};

// Function to calculate factorial using recursion
int factorial(int n) {
    if (n <= 1) return 1; // Base case
    return n * factorial(n - 1); // Recursive case
}

// Function to demonstrate a simple switch statement for grading
string checkGrade(int score) {
    switch (score / 10) {
        case 10:
            return "g";
        case 9:
            return "A";
        case 8:
            return "B";
        case 7:
            return "C";
        case 6:
            return "D";
        default:
            return "F";
    }
}

// Function to print student details using pointers
void printStudents(Student* students, int count) {
    cout << "Student Details:" << endl;
    for (int i = 0; i < count; i++) {
        // Using pointer arithmetic to access struct members
        cout << "Name: " << (students + i)->name 
             << ", Age: " << (students + i)->age 
             << ", Score: " << (students + i)->score 
             << ", Sex: " << ((students + i)->sex ? "Male" : "Female") << endl;
    }
}

// Function to demonstrate a while loop for countdown
void countdown(int start ) {
    cout << "Countdown:" << endl;
    while (start < 6) {
        cout << start << " ";
        start++;
    }
    cout << "Blast off!" << endl;
}

// Main function
int main() {
    // Array of students
    const int studentCount = 3;
    Student students[studentCount];

    // Input student details
    for (int i = 0; i < studentCount; i++) {
        cout << "Enter details for student " << (i + 1) << ":" << endl;
        cout << "Name: ";
        cin >> students[i].name;
        cout << "Age: ";
        cin >> students[i].age;
        cout << "Score: ";
        cin >> students[i].score;

        char sexInput;
        while (true) {
            cout << "Enter 'M' for Male or 'F' for Female: ";
            cin >> sexInput;
            if (sexInput == 'M' || sexInput == 'm') {
                students[i].sex = true;  // Male
                break; // Exit the loop
            } else if (sexInput == 'F' || sexInput == 'f') {
                students[i].sex = false; // Female
                break; // Exit the loop
            } else {
                cout << "Invalid input! Please enter 'M' or 'F'." << endl;
            }
        }
    }

    // Print student details using pointers
    printStudents(students, studentCount);

    // Calculate and print factorial of a number
    int number = 5;
    cout << "Factorial of " << number << " is " << factorial(number) << endl;

    // Check and print grades for each student using pointers
    for (int i = 0; i < studentCount; i++) {
        cout << students[i].name << "'s Grade: " << checkGrade(students[i].score) << endl;
    }

    // Countdown using a while loop
    countdown(0);

    return 0;
}
