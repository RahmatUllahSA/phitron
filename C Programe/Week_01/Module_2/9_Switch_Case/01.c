#include<stdio.h>
int main()
{
    int day=4;
    {
        switch(day)
        {
        case 1:
            printf("Saturday\n");
            break;
        case 2:
            printf("Sunday\n");
            break;
        case 3:
            printf("Monday\n");
            break;
        case 4:
            printf("Tuesday\n");
            break;
        case 5:
            printf("Wednesday\n");
            break;
        case 6:
            printf("Thrusday\n");
            break;
        case 7:
            printf("Friday\n");
            break;
        default:
            printf("Invalid number.\n");
        }

    }
    return 0;


}