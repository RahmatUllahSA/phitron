#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    string name;       
    int roll;
    string section;    
    int math_marks;
    int cls;

    // Constructor
    Student(string name, int roll, string section, int math_marks, int cls) 
    {

        this->name = name;
        this->roll = roll;
        this->section = section;
        this->math_marks = math_marks;
        this->cls = cls;
    }
};

int main() {
    // Creating objects
    Student rahmat("Rahmat Ullah", 1, "A", 100, 10);
    Student sanju("Sanju", 2, "A", 85, 10);
    Student fatema("Fatema", 3, "A", 90, 10);

    // Comparing math marks
    if (rahmat.math_marks > sanju.math_marks && rahmat.math_marks > fatema.math_marks) 
    {
        cout << rahmat.name << " " << rahmat.math_marks << endl;
    } else if (sanju.math_marks > rahmat.math_marks && sanju.math_marks > fatema.math_marks) 
    {
        cout << sanju.name << " " << sanju.math_marks << endl;
    } else {
        cout << fatema.name << " " << fatema.math_marks << endl;
    }

    return 0;
}


// Output: Rahmat Ullah 100

/*
Question: Create three static objects with the help of the constructor of the following class.
Student
{
	name;
	roll;
	section;
	math_marks;
	cls;
}
Then compare those 3 objects and print who got the highest math_marks and print his/her name.
*/