#include<stdio.h>
#include<string.h>
int main()
{
    char s[100],word[10];
    printf("Enter a string : ");
    scanf("%[^\n]s",&s);
    printf("Enter the word you want to search : ");
    scanf("%s",word);

    int i=0,k=0;

    for(int j=0;j<=strlen(s);j++)
    {
        if(word[k]==s[i])
            {
                printf("The word is present in the sentence ");
                i=i++;
                k=k++;            
            }
    }
    return 0;
}