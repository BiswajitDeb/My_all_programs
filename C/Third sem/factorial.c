#include<stdio.h>
int main()
{
    int n,mul=1;
    printf("Enter a number to print it's factorial : ");
    scanf("%d",&n);
    if(n<0) 
    {
        for(n;n<=-1;n++)
            mul=mul*n;
    }
    else 
        {
            for (n;n>=1;n--)
            mul=mul*n;
        }
    printf("The factorial is : %d",mul);
    return 0;
}