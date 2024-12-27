#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch>='0' && ch<='9')
    {
        printf("IS DIGIT\n",ch);
    }
    else if(ch>='A' && ch<='Z')
    {
        printf("ALPHA\n",ch);
        printf("IS CAPITAL\n",ch);
    }
    else
    {
        printf("ALPHA\n",ch);
        printf("IS SMALL");
    }
    return 0;

}