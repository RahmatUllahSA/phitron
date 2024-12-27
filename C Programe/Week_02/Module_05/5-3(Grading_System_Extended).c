// Grading, pass, fail, and those who are get 90 to 100 they get (Congratulation)


#include<stdio.h>
int main()
{
    int marks;
    scanf("%d",&marks);
    if(marks>=33 && marks<=100)
    {
        
        
        if(marks>=80 && marks<=100)
        {
            printf("Your grade is A+ \n", marks);
            if(marks>=90)
            {
                printf("Congratualtions.\n");
            }
        }
        else if(marks>=70 && marks<=79)
        {
            printf("Your grade is A\n", marks);
        }
        else if( marks>=60 && marks<=69)
        {
            printf("Your grade is A-\n", marks);
        }
        else if(marks>=50 && marks<=59)
        {
            printf("Your grade is B\n", marks);
        }
        else if( marks>=40 && marks<=49)
        {
            printf("Your grade is C\n", marks);
        }
        else if(marks>=33 && marks<=39)
        {
            printf("Your grade is D", marks);
        }

        printf("You have passed.\n", marks);

    }
    else if (marks>=0 && marks<=32)
    {
        printf("Your grade is F\n.",marks);
        printf("You have Failed", marks);
    }
    else
    {
        
        printf("Invalid Number",marks);
        
    }

}
