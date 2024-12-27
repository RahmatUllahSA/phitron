#include<stdio.h>
int main()
{
    int a= 5;
    if( a<10)
    //  True because a er man 5 er theke boro
    {
        a+=90;
        printf("My result is\n");
    }
    printf("%d", a);
    return 0;
}
// Output: My result is 
//         95