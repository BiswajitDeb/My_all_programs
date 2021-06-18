// #include<stdio.h>
// #include<math.h>
// int main()
// {
// int n;
// printf("Enter a number : ");
// scanf("%d",&n);
// float sqr=sqrt(n);
// if (n==sqr) {printf("Perfect square");}
// return 0;
// }
// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     int n;
//     int i;
//     float j;  
//     printf("Enter an integer number: ");
//     scanf("%d",&n);  
//     j=sqrt((double)n);
//     i=j;
//     if(i==j)
//         printf("%d is a perfect square.",n);
//     else
//         printf("%d is not a perfect square.",n);
      
//     return 0;
// }
#include<stdio.h>
#include<math.h>
int main()
{
int n,intsqrt;
float flsqrt;
printf("Enter a number : ");
scanf("%d",&n);
flsqrt=sqrt(n);
intsqrt=sqrt(n);
if (intsqrt==flsqrt)  {printf("Perfect Square");}   //if the float value of the sqrt == to the integer sqrt, that means there's no decimal ie; perfct sqr
else    printf("Not Perfect Square");
return 0;
}