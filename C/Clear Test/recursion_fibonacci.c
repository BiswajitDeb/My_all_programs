#include<stdio.h>

int fibo(int n)
{
    if(n==1)    {return 0;}
    else if(n==2 || n==3)   {return 1;}
    else    return(fibo(n-1)+fibo(n-2));
}


int main()
{
    int n;
    printf("Enter the number of terms you want to print : ");
    scanf("%d",&n);
    printf("The series is : ");
    for(int i=1;i<=n;i++)
    {
        printf("%d ",fibo(i));
    }
    return 0;
}