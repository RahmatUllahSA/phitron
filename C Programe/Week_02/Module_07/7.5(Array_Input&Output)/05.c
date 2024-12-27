// 3 number value te 20 jog houyar por output show korau

#include<stdio.h>
int main()
{
    int a[5];
    for( int i=0; i<=5; i++)
    {
        scanf("%d", &a[i]);
        a[2]+=20;
        printf("%d ", a[i]);
    }
    
}