// Zeros and Ones 01

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n;
    int num;
    int count_zero=0;
    int count_one=0;
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        scanf("%d", &num);
        if(num==0)
        {
            count_zero++;
        }
        else if(num==1)
        {
            count_one++;
        }
    }
    printf("%d %d", count_zero, count_one);




}