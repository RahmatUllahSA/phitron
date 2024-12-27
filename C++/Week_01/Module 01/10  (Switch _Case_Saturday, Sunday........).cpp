#include<iostream>
using namespace std;
int main()
{
    int day;
    cin>>day;
    switch(day)
    
    {
        case 1:
        cout<<"Saturday";
        break;
        
        case 2:
        cout<<"sunday";
        break;

        case 3: 
        cout<<"Monday";
        break;

        case 4:
        cout<<"Tuesday";
        break;

        case 5:
        cout<<"Wednessday";
        break;

        case 6:
        cout<<"Thrusday";
        break;

        case 7:
        cout<<"Friday";
        break;

        default:
        cout<<"Invalid Day";
    }
    return 0;

}

// input: 2
// Output: Sunday