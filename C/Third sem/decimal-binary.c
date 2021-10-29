//Write a program to convert Decimal to Binary number using function call.
#include<stdio.h>

long long decimal2binary(int n)
{
  long long binary = 0;
  int rem, i = 1;

  while (n!=0) 
    {
        rem = n % 2;
        n /= 2;
        binary += rem * i;
        i *= 10;
    }
    return binary;
}


int main()
{
    long int n;
    printf("Enter a number : ");
    scanf("%ld",&n);
    //int k = decimal2binary(n);
    printf("The binary form of %d is : %ld",n,decimal2binary(n));
    //printf("%d",k);
    return 0;
}