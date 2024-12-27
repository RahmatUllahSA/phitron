#include<bits/stdc++.h>
using namespace std;
int main()
{
    // int a[5];  static array
    int* a=new int[5];  //Dymaic array evhabe declear kore 
    
    for(int i=0; i<5; i++)
    {
        cin>>a[i];
        cout<<a[i]<<" ";
    }
    return 0;
}

// Input: 1 2 3 4 50
// Output: 1 2 3 4 50