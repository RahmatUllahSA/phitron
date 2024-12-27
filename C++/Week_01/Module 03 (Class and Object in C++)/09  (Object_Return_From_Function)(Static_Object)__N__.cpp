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
    Student fun()  // Function
    {
        Student Rahmat(100,9,4.99);
        return Rahmat;  // Object Return rom function
    }
int main()
{
    Student obj= fun();  //function call
    cout << obj.roll << " " << obj.cls << " " << obj.gpa << endl;  

    return 0;
}

// Output: 100 9 4.99