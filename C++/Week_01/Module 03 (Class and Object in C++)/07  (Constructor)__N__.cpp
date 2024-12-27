#include<bits/stdc++.h> // Includes all standard C++ libraries.
using namespace std;

class Student
{
    public:
    int roll;     // Member variable for storing the roll number of the student.
    int cls;      // Member variable for storing the class (grade) of the student.
    double gpa;   // Member variable for storing the GPA of the student.

    // Constructor to initialize the student's roll, class, and GPA.
    Student(int r, int c, double g) 
    {
        roll = r;
        cls = c;
        gpa = g;
    }
};

int main()
{
    // Creating two Student objects and initializing them with roll, class, and GPA.
    Student Rahmat(1022, 12, 4.90);
    Student Sanju(1023, 12, 4.80);

    // Printing the details of the 'Rahmat' object.
    cout << Rahmat.roll << " " << Rahmat.cls << " " << Rahmat.gpa << endl;

    // Printing the details of the 'Sanju' object.
    cout << Sanju.roll << " " << Sanju.cls << " " << Sanju.gpa << endl;

    return 0;
}

// Output:
// 1022 12 4.9
// 1023 12 4.8
