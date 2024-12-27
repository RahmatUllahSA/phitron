// Salami again 

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int N;
    scanf("%d", &N);

    int salami[N];
    int max_salami = 0;

    for (int i = 0; i < N; i++) 
    {
        scanf("%d", &salami[i]);
        if (salami[i] > max_salami) 
        {
            max_salami = salami[i];
        }
    }

    for (int i = 0; i < N; i++) 
    {
        printf("%d ", max_salami - salami[i]);
    }

    return 0;
}
