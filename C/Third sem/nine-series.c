//Write a program to find the count of series 9+99+999+9999.....+N. N is user input.
#include<stdio.h>
int main()
{
    int n,count=0,sum=0;
    printf("Enter an integer : ");
    scanf("%d",&n);
    //printf("The series is : ");

    for(int i=1;i<=n;i++)
        {
            count=count*10 + 9;
            sum=sum+count;
            //printf("%d+",count);
        }

    printf("\nThe sum of the series is : %d",sum);
    return 0;
}