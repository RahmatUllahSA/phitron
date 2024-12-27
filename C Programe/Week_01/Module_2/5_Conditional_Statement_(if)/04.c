#include<stdio.h>
int main()
{
    int a= 10;
    if(a>5)
    // True that why output is 60
    {
        a+=50;
        printf("My result is\n");
    }
    printf("%d",a);
    return 0;
}
/* Output: My result is
           60
*/