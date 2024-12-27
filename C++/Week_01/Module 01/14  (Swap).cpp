// #include<iostream>
// #include<algorithm>      // Must be add this headerfile 
// using namespace std;
// int main()
// {
//     int a,b;
//     cin>>a>>b;

//     int temp=a;
//     a=b;
//     b=temp;

//     cout<<a<<" "<<b;
//     return 0;
// }

// Input: 10 20
// Output: 20 10

#include<iostream>
#include<algorithm>  // Must be add this headerfile 
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    swap(a,b);
    cout<<a<<" "<<b;

    return 0;
}

// Input: 80 60
// Output: 60 80