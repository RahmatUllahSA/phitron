#include<iostream>
#include<iomanip>  //must be add this header file when we use setprecision
using namespace std;
int main()
{
    double D=123.36569855;
    cout<<fixed<< setprecision(4)<<D<<endl;
    return 0;
}

// Output:123.3657