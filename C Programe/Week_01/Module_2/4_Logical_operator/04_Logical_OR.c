#include<stdio.h>
#include<stdbool.h>
int main()
{
    bool result= 8>6 || 6<9;
    //           True   True
    printf("%d", result);
    return 0;
}
// Output is 1 that means True