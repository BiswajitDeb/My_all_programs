// The code Works Fine in my VScode but it's not showing any output here 
// I've already emailed to the helpdesk regarding this matter and provided screenshots

#include <stdio.h>
#include <string.h>

int sort(char str[],int n)
{
   for (int i = 0; i < n-1; i++)
      {
        for (int j = i+1; j < n; j++)
            {
                  if (str[i] > str[j])
                     {
                        int temp = str[i];
                        str[i] = str[j];
                        str[j] = temp;
                     }
            }
      }
}

int main ()
{
char str1[20],str2[20];
printf("Enter the first word : ");
// gets(str1);
scanf("%s",&str1);
printf("Enter the second word : ");
// gets(str2);
scanf("%s",&str2);
strlwr(str1);
strlwr(str2);
int n=strlen(str1);
int n1=strlen(str2);

   if(n!=n1)
   {
      printf("The strings are not ANAGRAMS \n");
      return 0;
   }

//sorting the strings
   sort(str1,n);
   sort(str2,n);

   // Comparing the strings

   for(int i = 0; i<n; i++)
   {
        if(str1[i] != str2[i]) {printf("The strings are not ANAGRAMS \n");    return 0;}
   }

    printf("The strings are ANAGRAMS \n");

   return 0;
}