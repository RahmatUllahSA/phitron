/*
******HERE WE USE NESTED IF ELSE*****

#include<stdio.h>
int main()
{
    int marks;
    scanf("%d",&marks);

    if(marks>=80 && marks<=100)
    {
        printf("My grade is A+", marks);
    }
    else if(marks>=70 && marks<=79)
    {
        printf("My grade is A", marks);
    }
    else if(marks>=60 && marks<=69)
    {
        printf("My grade is A-", marks);
    }
    else if(marks>=50 && marks<=59)
    {
        printf("My grade is B", marks);
    }
    else if(marks>=40 && marks<=49)
    {
        printf("My grade is C",marks);
    }
    else if(marks>=33 && marks<=39)
    {
        printf("My grade is D", marks);
    }
    else if(marks>=32 && marks<=32)
    {
        printf("My grade is F", marks);
    }
    else
    {
        printf("Invalid Number.");
    }
    return 0;

}
*/

// Othoba evhabe korleu hobe 
//HERE WE USE CONDITIONAL STATEMENT(IF) 

#include<stdio.h>
int main()
{
    int marks;
    scanf("%d",&marks);
    if(marks>=80 && marks<=100)
    {
        printf("My Grade is A+", marks);
    }
    if( marks>=70 && marks<=79)
    {
        printf("My Grade is A", marks);
    }
    if(marks>=60 && marks<=69)
    {
        printf("My Grade is A-", marks);
    }
    if(marks>=50 && marks<=59)
    {
        printf("My Grade is B", marks);
    }
    if(marks>=40 && marks <=49)
    {
        printf("My Grade is C", marks);
    }
    if(marks>=33 && marks<=39)
    {
        printf("My Grade is D", marks);
    }
    if(marks<0 || marks>100)
    {
        printf("Invalid Number.", marks);
    }
   return 0;
}