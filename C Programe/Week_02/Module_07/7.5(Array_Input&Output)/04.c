// Float number print koro and dhoshomiker por 2 ghor thakbe shudhu

#include<stdio.h>
int main()
{
    float a[5];
    for( int i=0; i<=5; i++)
    {
        scanf("%f", &a[i]);
        printf("%0.2f ", a[i]);

    }
    return 0;
}