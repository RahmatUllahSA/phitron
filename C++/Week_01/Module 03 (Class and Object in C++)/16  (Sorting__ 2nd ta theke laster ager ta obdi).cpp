#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a+2, a+6); //Desending
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
// Input:
// 7
// 70 60 50 40 30 20 10

// Output:
// 70 60 20 30 40 50 10
