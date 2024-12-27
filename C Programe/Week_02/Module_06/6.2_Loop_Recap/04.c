/*
Output: 
How are you>
How are you>
How are you>
How are you>
How are you>

How are you>
How are you>
How are you>
How are you>
How are you>

How are you>
How are you>
How are you>
How are you>
How are you>
*/
#include<stdio.h>
int main()
{
    
    for(int i=1; i<=3; i++)
    {
        for(int j=1; j<=5; j++)
        {
            printf("How are you>\n");
        }
        printf("\n");
    }
    return 0;
}
