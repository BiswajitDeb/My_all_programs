#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() 
{

    char ch;
    char s[10];
    char sentence[50];
    scanf("%c",&ch);
    scanf("%s",&s);
    scanf("\n");
    scanf("%[^\n]%*c", sentence);
    printf("%c\n%s\n%s",ch,s,sentence); 
    return 0;
}