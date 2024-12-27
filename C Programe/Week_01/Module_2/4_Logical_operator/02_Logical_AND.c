#include<stdio.h>
#include<stdbool.h>
int main()
{
    bool result= 7>3 && 3>2;
    //           True   True 
    printf("%d", result);
    return 0;
}
// Output is 1 that means True