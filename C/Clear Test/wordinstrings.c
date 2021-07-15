#include<stdio.h>
#include<string.h>
int main()
{
    char sentence[1000],word[20];
    printf("Enter the string : ");
    gets(sentence);
    //scanf("%[^\n]s",sentence);
    printf("Enter the word you want to find : ");
    scanf("%s",word);
    if(strstr(sentence,word))
    {
        printf("The word is present in the string");
    }
    else {printf("The word is not present in the string");}
    return 0;
}