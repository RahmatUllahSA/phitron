// In this code we use continue statement


#include<stdio.h>
int main()
{
    for(int i=100; i<=200; i++)
    {
        if(i%2==0 && i%3==0 && i%5==0)
        {
            printf("%d is number\n",i);
            continue;   // Continue Statement 
        }
    printf("%d is not the number.\n",i);
    }
    return 0;
}
