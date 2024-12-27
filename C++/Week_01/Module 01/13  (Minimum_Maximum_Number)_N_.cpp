// #include<iostream>
// #include<algorithm>   // Must be add this headerfile 
// using namespace std;
// int main()
// {
//     int a,b;
//     cin>>a>>b;

    // if(a>b)
    // {
    //     cout<<"MaXimum";
    // }
    // else
    // {
    //     cout<<"Minimum";
    // }
//     return 0;
// }

// Input: 30 40
// Output: Minimum

// Input: 50 40
// Output: Maximum


#include<iostream>
#include<algorithm>   // Must be add this headerfile 
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    
    cout<<"Minimum number: "<<min(a,b)<< endl;
    cout<<"Maximum number: "<<max(a,b)<< endl;

    return 0;
}

// Input: 20 30
// Output: Minimum number: 20
// Output: Maximum number: 30

