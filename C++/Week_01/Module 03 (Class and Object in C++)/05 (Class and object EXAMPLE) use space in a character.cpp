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
    Car a;
    cin.getline(a.name,100);
    cin>>a.roll>>a.range;

    cout<<a.name<<" "<<a.roll<<" "<<a.range;
    return 0;
}

// Input:
// rahamt ullah
// 20
// 235.32
// Output:
// rahamt ullah 20 235.32