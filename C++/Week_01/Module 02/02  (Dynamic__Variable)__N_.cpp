#include<bits/stdc++.h>
using namespace std;
int main()
{
    // int x =10;  
    int *p= new int; // new lekhar maddhome amra bujhbo eta heap memory theke return kore, address pointer e store hobe 
    *p=200;
    // cout<<x<<endl;
    cout<<*p;  //*p is a pointer 
    return 0;
}
// Output: 200
// if we chage *p=300 then output: 300