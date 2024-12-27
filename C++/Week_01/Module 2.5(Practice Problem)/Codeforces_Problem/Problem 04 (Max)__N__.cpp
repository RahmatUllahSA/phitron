#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int moye_moye=INT_MIN;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        moye_moye=max(moye_moye,arr[i]);
        
    }
    cout<<moye_moye;
    return 0;
}
// Input: 5
//     1 2 3 4 8
// Output: 8   // Max number 



/*
E. Max
time limit per test1 second
memory limit per test256 megabytes
Given a number N, and N numbers, find maximum number in these N numbers.

Input
First line contains a number N (1 ≤ N ≤ 103).

Second line contains N numbers Xi (0 ≤ Xi ≤ 109).

Output
Print the maximum number.

Example
InputCopy
5
1 8 5 7 5
OutputCopy
8
*/