// Given N numbers. Count how many of these values are even, odd, postive and negative.



#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);

    int even_count=0, odd_count=0, positive_count=0, negative_count=0;

    for(int i=0; i<N; i++)
    {
        int x;
        scanf("%d",&x);
        if(x%2==0)
        {
            // Even
            even_count++;
        }
        else
        {
            //Odd
            odd_count++;

        }

        if(x>0)
        {
            // Positive 
            positive_count++;
        }
        else
        {
            // Negative
            negative_count++;

        }
    }

    printf("Even count: %d\n", even_count);
    printf("Odd COunt: %d\n", odd_count);
    printf("Positive count: %d\n", positive_count);
    printf("Negative count: %d\n", negative_count);
   

  return 0;
}