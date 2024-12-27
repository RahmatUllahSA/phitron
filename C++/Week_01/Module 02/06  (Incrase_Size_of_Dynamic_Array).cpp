#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *a=new int[3];
    for(int i=0; i<3; i++)
    {
        cin>>a[i];
    }
    int *b=new int[5];
    for(int i=0; i<5; i++)
    {
        b[i]=a[i];
    }
    b[3]=10;
    b[4]=105;
    delete[]a;  // stack memory rekhe lavh nai hudai jayga nosto taile delete kore dite heap e shob value sotre korbo
    for(int i=0; i<5; i++)
    {
        cout<<b[i]<<" ";
    }
    return 0; 
}
// Input: 10 20 30
// Output: 10 20 30 10 105

