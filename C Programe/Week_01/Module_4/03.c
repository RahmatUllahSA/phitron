#include<stdio.h>
int main()
{
    int M;
    scanf("%d",&M);
    if(M>=1000)
    {
        printf("Three Kacchi",M);
    }
    else if(M>=500)
    {
      printf("One Large Pizza",M);  
    }
    else if(M>=250)
    {
      printf("Three Small Burger",M);  
    }
    else if(M>=100)
    {
      printf("Three Fuchka",M);  
    }
    else
    {
        printf("Nothing",M);
    }
}