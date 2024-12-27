#include<stdio.h>
int main()
{
    int i=0;
    do{
        printf("Are you okey?\n");
        i++;
    }
    while(i>6);
}

/*
Output:
Are you okey?

 this is the disadvantage of do while loop,
 if the condition is false that time the loop run one time 
*/