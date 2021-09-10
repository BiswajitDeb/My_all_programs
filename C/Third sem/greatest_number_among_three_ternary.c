#include<stdio.h>
int main()
{
int num1,num2,num3,greatest;
printf("Enter 3 numbers :\n");
scanf("%d%d%d",&num1,&num2,&num3);
greatest = num1 > num2 ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3) ;
printf("\nThe greatest among the given number is : %d",greatest);
return 0;
}