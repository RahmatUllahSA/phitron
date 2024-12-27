// use break statement 

#include<stdio.h>
int main()
{
    for(int i=100; i<=200; i++)
    {
        printf("checking %d\n",i);
        if(i%2==0 && i%3==0 && i%5==0)
        {
            printf("%d is the number.\n",i);
            break;

        }
    }
}