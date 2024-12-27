#include<stdio.h>
int main()
{
    printf("Before the loop\n");
    for( int i= 0; i<4; i++)
    {
        printf("After loop\n");
    }
    printf("After loop 1\n");
    return 0;
}
/*
Output:
Before the loop
After loop
After loop
After loop
After loop
After loop 1
*/