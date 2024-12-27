#include<bits/stdc++.h> 
using namespace std;

class Student  // Class
{
    public:
    int roll;     
    int cls;      
    double gpa;   

    Student(int roll, int cls, double gpa) // Constructor
    {
        this->roll = roll;  // ekhane (this) akta pointer ar ( -> )Arrow sign
        this->cls = cls;
        this->gpa = gpa;
    }
};

int main()
{
   
    Student Rahmat(1022, 12, 4.90);  // Object 1
    Student Sanju(1023, 12, 4.80);   // Object 2

    cout << Rahmat.roll << " " << Rahmat.cls << " " << Rahmat.gpa << endl;
    cout << Sanju.roll << " " << Sanju.cls << " " << Sanju.gpa << endl;

    return 0;
}
// Output:
// 1022 12 4.9
// 1023 12 4.8