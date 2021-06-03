#include<stdio.h>  
#include<conio.h>  
int main()  
{   
int n, j = 0, i;    
printf("Enter a number : ");  
scanf("%d", &n);      
for(i = 1; i < n; i++)  
    {
    if (n%i == 0)  {j = j + i;}
    }  
if (j == n)  
    printf(" %d is a Perfect number",n);  
else  
    printf(" %d isn't a Perfect number",n);  
return 0;
}  