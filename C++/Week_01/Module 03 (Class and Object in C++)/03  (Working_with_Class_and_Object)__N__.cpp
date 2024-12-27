#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    char name[100];
    long long int id;
    char section;
};

int main()
{
    Student a;
    // a.name="Rahmat Ullah"; evhabe shorashori lekha jay na array er jonno 
    char temp[100]="Rahmat Ullah";
    strcpy(a.name,temp);
    a.id=22103253;
    a.section='C';
    cout<<a.name<<endl<<a.id<<endl<<a.section<<endl;
    return 0;

}