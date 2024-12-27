#include<iostream>
using namespace std;
int main()
{
    int a;

    cin>>a;
    cin.ignore();  // Poroborti space ignore korar jonno use kora hoy 
    
    
    char s[100];
    cin.getline(s,100);  // jokhn amra space diye diye string print korbo, getline.( , ) likhte hobe 
    
    cout<<a <<endl<<s<<endl;

    return 0;
}

// Input:
// 10
// My name is rahmat ullah popo
// Output:
// 10
// My name is rahmat ullah popo