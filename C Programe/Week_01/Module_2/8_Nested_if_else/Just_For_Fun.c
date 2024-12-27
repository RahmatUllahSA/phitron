#include<stdio.h>
#include<stdbool.h>
int main()
{
    int tour_days=4;
    if(tour_days==2)
    {
        bool boatHAVE= true;
        if(boatHAVE)
        {
            printf("PADMA NODITE JABO");
        }
        else
        {
            printf("Bari cole ashbo");
        }
    }
    else if(tour_days==4)
    {
        bool microHAVE=false;
        if(microHAVE)
        {
            printf("Comilla jabo.");
        }
        else
        {
            printf("Comilla jiboneu jabo na. Emniteu jaoyar iccha nai.");

        }
    }
    else
    {
        printf("Kothau jabo na. Ghumabo ar relax korbo. hihi.");

    }
    return 0;
}