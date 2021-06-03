#include<stdio.h>
int main()
{
    char alpha;
    printf("Enter an alphabet :");
    scanf("%c",&alpha);

    switch(alpha)
    {
        case 'A': case 'E': case 'I': case 'O': case 'U':
        case 'a': case 'e': case 'i': case 'o': case 'u':
            printf("The alphabet %c is a vowel",alpha);  break;
        default : printf("The given alphabet is not a vowel");
    }
    return 0;
}