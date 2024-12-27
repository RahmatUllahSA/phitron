/*
In this problem you will be given a floating point number x. You have to print x upto 3 decimal points.

Input Format:
Input will contain a floating point number x.

Constraints:
1.0 <= x <= 100.0

Output Format:
Print the number x upto 3 decimal points.

Sample Input 0:
22.12344

Sample Output 0:
22.12
*/



#include<stdio.h>
int main()
{
    float x;
    scanf("%f", &x);
    printf("%.3f",x);
    return 0;
}