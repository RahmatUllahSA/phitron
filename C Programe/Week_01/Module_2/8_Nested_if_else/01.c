#include<stdio.h>
#include<stdbool.h>
int main()
{
    int tour_days=2;
    if(tour_days==2)
    {
        bool boatIsAvailable=true;
        if(boatIsAvailable)
        {
            printf("Going to shimangle.");
        }
        else
        {
            printf("Going to Dhaka");
        }
    }
    else if (tour_days==2)
    {
        bool microIsAvailable=true;
        if(microIsAvailable)
        {
            printf("Going to pabna.");
        }
        else
        {
            printf("Going to comilla.");
        }
    }
    else
    {
        printf("Tour is cancle so put your hand on your ass. Thank you so much.");

    }
    return 0;

}