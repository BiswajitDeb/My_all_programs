// #include<stdio.h>
// int main()
// {
// long int n,sqr;
// printf("Enter a number :");
// scanf("%ld",&n);
// if((n*n)%10==n)   {printf("Automorphic");}
// return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>
 
// int main()
// {
//     int num, sqr, temp, last;
//     int n =0;
 
//     printf("Enter a number \n");
//     scanf("%d",&num);
 
//     sqr = num*num;  //calculating square of num
//     temp = num;
 
//     //Counting number of digits
//     while(temp>0){
//         n++;
//         temp = temp/10;
//     }
 
//     //Extracting last n digits
//     int den = floor(pow(10,n));
//     last = sqr % den;
 
//     if(last == num)
//         printf("Automorphic number \n");
//     else
//         printf("Not Automorphic \n");
 
//     return 0;
// }

#include<stdio.h>
int main()
{

    int n,sqr;
    printf("Enter a number : ");
    scanf("%d",&n);
    sqr=n*n;
    while(n>0)
        {
           if(n%10==sqr%10)
           {
               n=n/10;
               sqr=sqr/10;
           }
           else break;
        }
    if (n==0)   {printf("Automorphic");}
    else        {printf("Not Automorphic");}
return 0;
}