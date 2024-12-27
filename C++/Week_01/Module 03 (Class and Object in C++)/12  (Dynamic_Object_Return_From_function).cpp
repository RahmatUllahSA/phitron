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
    Student* fun()  // Function
    {
        Student* Rahmat= new Student(100,9,4.99);  // Rahmat is a pointer and dynamic object  er address return hobe
        return Rahmat;  
    }
int main()
{
    Student* p= fun();  // fun() is a function 
    cout << p->roll << " " << p->cls << " " <<p->gpa << endl;  

    return 0;
}
// Output: 100,9,4.99