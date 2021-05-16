#include<stdio.h>
#include<math.h>
int main()
{
    float A,p,r,t,n;
    int c;
    printf("Enter the Initial principle Value : ");
    scanf("%f",&p);
    printf("Enter the interest rate : ");
    scanf("%f",&r);
    printf("Enter the format of time period of copounding : \n Type 1 for years and 2 for months : ");
    scanf("%s",&c);
    if (c==1)
        {
        n=1;
        printf("Enter the number of years : ");
        scanf("%f",&t);
        }
    else if (c==2)
       {
       n=12;
       printf("Enter the number of months : ");
       scanf("%f",&t);
       }
    A=p*(pow((1+r/n),(n*t)));
    printf("Your final amount is : %f",A);
    return 0;
}