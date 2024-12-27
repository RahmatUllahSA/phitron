#include<stdio.h>
int main()
{
    int i;
    scanf("%d",&i);
    if(i%2==0)
    {
        printf("Even\n",i);
    }
    else
    {
        printf("Odd\n",i);
    }



if(i>0)
{
    printf("Positive.",i);
}
else
{
    printf("Negative.",i);
}
    return 0;
}