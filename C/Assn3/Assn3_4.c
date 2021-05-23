#include<stdio.h>
int main()
{
float a,b,c;
printf("Enter the sides of the triangle :\n");
scanf("%f %f %f",&a,&b,&c);

if(a==b && a==c)    {printf("It's an equilateral triangle");}
if((a==b && b!=c)||(b==c && c!=a)||(c==a && a!=b))    {printf("Its an isoscales triangle");}
if(a!=b && b!=c && a!=c)    {printf("It's a scalene triangle");}
return 0;
}

