#include<stdio.h>

#include<stdio.h>
int main()
{
   int A;
   long long B;
   float C;
   char D;
    scanf("%d\n",&A);
    scanf("%lld\n",&B);
    scanf("%f\n",&C);
    scanf("%c",&D); //  Here Dont use \n line

    printf("%d\n",A);
    printf("%lld\n",B);
    printf("%.2f\n",C);
    printf("%c",D);

    return 0;
}
