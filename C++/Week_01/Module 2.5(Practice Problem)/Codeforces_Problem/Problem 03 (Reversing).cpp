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
    for(int i=n-1; i>=0; i--)
    {
        cout<<a[i]<<" ";
    }
    
    return 0;
}
// input: 5
//        1 2 3 4 5
// Output:5 4 3 2 1


/*
F. Reversing
time limit per test1 second
memory limit per test64 megabytes
Given a number N and an array A of N numbers. Print the array in a reversed order.

Note:

*Don't use built-in-functions.

Input
First line contains a number N (1 ≤ N ≤ 103) number of elements.

Second line contains N numbers (0 ≤ Ai ≤ 109).

Output
Print the array in a reversed order.

Examples
InputCopy
4
5 1 3 2
OutputCopy
2 3 1 5 
InputCopy
5
1 2 3 4 5
OutputCopy
5 4 3 2 1
*/