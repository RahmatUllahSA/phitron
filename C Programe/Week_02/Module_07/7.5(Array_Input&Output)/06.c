// every inputer sathe 5 jog hoye output print hobe

#include<stdio.h>
int main()
{
    int a[4];
    for(int i=0; i<=4; i++)
    {
        scanf("%d", &a[i]);
    }
    for( int i=0; i<=4; i++)
    {
        a[i]+=5;
    }
    for(int i=0; i<=4; i++)
    {
        printf("%d", a[i]);
    }
    return 0;
}

// Input: 10 20 30 40 50
// Output:15 25 35 45 55