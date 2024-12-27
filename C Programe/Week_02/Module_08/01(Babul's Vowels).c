// Babul's Vowels


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char c;
    scanf("%c",&c);
    
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
    {
        printf("Vowel\n");
    }
    else 
    {
        printf("Consonant\n");
    }
    return 0;
}
