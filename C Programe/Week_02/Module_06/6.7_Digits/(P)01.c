// Given a number N. Print the digis of that number from right to left separated by space.

/*
Input:
4
121
39
123456
1200

Output: 
1 2 1 
9 3 
 6 5 4 3 2 1
 0 0 2 1

*/

#include<stdio.h>
int main()
{

    int t;
    scanf("%d", &t);

    for(int i=0; i<t; i++)
    {
        int n;
        scanf("%d", &n);

        while(n>0)
        {
            int digit = n% 10;
            printf("%d ", digit);

            n/=10;

        }


        printf("\n");
    }

    return 0;
}