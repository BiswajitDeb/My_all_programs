#include<stdio.h>
#include<string.h>
int main()
{   char s1[200],s2[20];
    printf("Enter a sentence : ");
    gets(s1);
    printf("Enter a word : ");
    gets(s2);
    if(strstr(s1,s2))   {printf("Never Gonna Give you up\nNever gonna let you down\nNever gonna run around and Desert you");}
    else                {printf("click here : https://youtu.be/dQw4w9WgXcQ");}
    return 0;
}