#include<bits/stdc++.h> 
using namespace std;

// Class definition
class Student {
    public:
    int roll;     // Roll number of the student
    int cls;      // Class/grade of the student
    double gpa;   // GPA of the student

    // Constructor to initialize the attributes
    Student(int roll, int cls, double gpa) {
        this->roll = roll;  // 'this' is a pointer to the current object; '->' is used to access members
        this->cls = cls;
        this->gpa = gpa;
    }
};

// Function returning a pointer to a Student object
Student* fun() {
    // Local object created on the stack
    Student Rahmat(100, 9, 4.99);

    // Create a pointer pointing to the local object
    Student* p = &Rahmat;

    // This is problematic because Rahmat is a local object.
    // When the function ends, Rahmat goes out of scope and is destroyed.
    return p;  // Returning a pointer to a destroyed object (dangling pointer)
}

int main() {
    Student* p = fun();  // Call the function and get a pointer to the Student object

    // Accessing members of a destroyed object results in undefined behavior.
    cout << p->roll << " " << p->cls << " " << p->gpa << endl;  

    return 0;
}


// Output: 100 9 4.99