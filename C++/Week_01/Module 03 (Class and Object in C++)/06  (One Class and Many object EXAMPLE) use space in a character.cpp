#include<bits/stdc++.h>
using namespace std;
class Car
{
    public:
    char name[100];
    int roll;
    double range;
};

int main()
{
    Car a,b;
    cin.getline(a.name,100);
    cin>>a.roll>>a.range;
    cin.ignore();  //Enter k input hishabe jen na nite pare ai jonno use kora hoyeche

    cin.getline(b.name,100);
    cin>>b.roll>>b.range;

    cout<<a.name<<" "<<a.roll<<" "<<a.range<<endl;
    cout<<b.name<<" "<<b.roll<<" "<<b.range;
    return 0;
}
// Input:
// Rahmat Ullah
// 100 200.35
// Sana Ullah
// 200 300.25
// Output:
// Rahmat Ullah 100 200.35
// Sana Ullah 200 300.25