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
    sort(a, a+n, greater<int>()); //Desending
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}

// Input:
// 8
// 10 23 52 2 65 100 30 54
// Output:
// 100 65 54 52 30 23 10 2