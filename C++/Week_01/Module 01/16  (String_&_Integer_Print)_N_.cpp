#include<iostream>
using namespace std;
int main()
{
    int a;
    char s[100];

    cin.getline(s,100);  // jokhn amra space diye diye string print korbo, getline.( , ) likhte hobe 
    cin>>a;
    cout<<s<<endl<<a;

    return 0;
}

// Input: 
// my Name is rahmat 
// 100
// Output:
// my Name is rahmat 
// 100