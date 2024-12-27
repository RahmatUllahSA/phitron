#include<bits/stdc++.h>  //when we use this header file we dont need to use all others headerfile like #include<algorithm> etc.
// #include<iostream>
// #include<algorithm>   // Must be add this headerfile 
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    
    cout<<"Minimum number: "<<min(a,b)<< endl;
    cout<<"Maximum number: "<<max(a,b)<< endl;

    return 0;
}

// input:
// 10 20
// Output:
// Minimum number: 10
// Maximum number: 20