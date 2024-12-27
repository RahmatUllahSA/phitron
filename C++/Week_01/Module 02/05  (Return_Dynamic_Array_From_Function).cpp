#include<bits/stdc++.h>
using namespace std;
int* fun()    //This is a function named `fun` that returns a pointer to an integer array.
{
    int *a=new int[5];     // Dynamically allocates memory for an integer array of size 5 on the heap.
                           // The pointer `a` holds the address of the first element of the array.
 
    for(int i=0; i<5; i++)
    {
        cin>>a[i];
        
    }
    return a; // Returns the pointer `a`, which points to the dynamically allocated array.

}
int main()
{

    int* x= fun();  //Calls the fun function, storing the returned array pointer in x.
    for(int i=0; i<5; i++)
    {
        cout<<x[i]<<" ";  //A loop prints all 5 elements of the array using x[i]
    }
    return 0;

}
// Input: 1 2 3 4 50
// Output: 1 2 3 4 50