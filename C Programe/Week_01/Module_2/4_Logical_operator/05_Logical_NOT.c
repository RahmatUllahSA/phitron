#include<stdio.h>
#include<stdbool.h>
int main()
{
    bool result= !(2>1);
    //            2>1 is true but we use !(NOT) that is why it is False 
    printf("%d", result);
    return 0;
}
// Output is 0 that means false