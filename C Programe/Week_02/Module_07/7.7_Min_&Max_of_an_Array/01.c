// minimum and maximum number find out.

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
    int max= a[0], min = a[0];
    for(int i=0; i<n; i++)
    {
        if(a[i]<min)
        {
        min=a[i];
        }
        if(a[i]>max)
        {
            max=a[i];
        }
        
    }
    printf("minimum = %d, maximum = %d\n", min, max);
   
}
// Input: 5
//       10 20 -3 4 6
// Output: Minimum= -3
//         maximum= 20