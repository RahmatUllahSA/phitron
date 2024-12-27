#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number is: ");
    scanf("%d",&a);
    
    if(a<10)
    {
        printf("a is less than 10");
    }
    else if(a<15)
    {
        printf("a is less than 15");
    }
    else if( a<20)
    {
        printf("a is less than 20");
    }
    else
    {
        printf("a is less than 100");
    }
    return 0;

}