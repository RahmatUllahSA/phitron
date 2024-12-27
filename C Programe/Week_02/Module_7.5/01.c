// A. Summation



#include <stdio.h>
#include <stdlib.h> 

int main() 
{
    int n;
    long long sum = 0; 
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) 
    {
        int num;
        scanf("%d", &num);
        sum += num; 
    }
    printf("%lld\n", llabs(sum));  
    return 0;
}
