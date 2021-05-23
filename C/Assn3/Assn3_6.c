#include<stdio.h>
int main()
{
int n ,sum=0;

    printf("Enter the ending number : ");
    scanf("%d",&n);
    printf("The numbers are : \n");
    for (int i=1;i<=n;i++)
    {
        if(i%2==0)  {printf("%d\n",i);sum=sum+i;}
        
    }
    printf("The sum of first %d integers is %d",n,sum);
    return 0;
}