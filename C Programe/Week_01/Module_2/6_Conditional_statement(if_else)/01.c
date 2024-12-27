#include<stdio.h>
int main()
{
    int number;
    printf("Enter an integer: ");
    scanf("%d",&number);
    
    if (number%2 == 0)
    {
    printf("This is integer number.",number);
    }
    else
    {
        printf("This is odd number.",number);
        
    }
    return 0;


}