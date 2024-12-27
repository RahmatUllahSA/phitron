// #include<iostream>
// using namespace std;
// int main()
// {
//     char s[100];

//     cin>>s;
//     cout<<s;

//     return 0;
// }

// Input:  Hello
// Output: Hello

#include<iostream>
using namespace std;
int main()
{
    char s[100];

    cin.getline(s,100);  // jokhn amra space diye diye string print korbo, getline.( , ) likhte hobe 
    cout<<s;

    return 0;
}

// Input: My Name is Rahmat
// Output:My Name is Rahmat