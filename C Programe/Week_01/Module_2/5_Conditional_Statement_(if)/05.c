#include<stdio.h>
#include<math.h>
int main()
{
    int a = 10;
    if(a>20)
    // False that is why this statement is not execute and the compiler skip this ans run next step
    {
        a+=60;
        printf("The number is\n");
    }
    printf("%d",a);
    return 0;
}
/*  Output: The number is 
            10
*/