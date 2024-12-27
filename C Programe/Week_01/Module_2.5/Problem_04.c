/*
In this problem you will be given two integers a and b, you have to tell if one is the multiple of other. (a is the multiple of b or b is the multiple of a).

Input Format:
Input will contain two integers a, b.

Constraints:
1 <= a, b <= 10000

Output Format:
Print "Yes" if one is the multiple of the other and "No" otherwise.

Sample Input:
5 9

Sample Output: 
No

Sample Input 1:
18 3

Sample Output 1:
Yes
*/

#include<stdio.h>
int main()
{
    int a, b;
    scanf("%d%d",&a, &b);
    if(a%b==0 || b%a==0)
    {
        printf("Yes\n");
    }
    else{
        printf("No");
    }
}