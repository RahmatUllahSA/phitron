// sum and average of n number of  input 

#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int sum=0;
    for(int i=0; i<n; i++)
    {
        sum+=a[i];  
    }
    printf("%d\n", sum);

    double avg = (double) sum/n;
    {
        printf("%0.2lf", avg);
    }
    return 0;
}

// Input: 5
//       10 20 30 60
// Ouput: 120
// Output:30.00