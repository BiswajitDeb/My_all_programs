#include<stdio.h>
int main()
{
    float a,b,c;
    printf("Enter the angles of the triangle :\n");
    printf("First angle :");    {scanf("%f",&a);}
    printf("Second angle :");    {scanf("%f",&b);}
    printf("Third angle :");    {scanf("%f",&c);}
    if (a+b+c==180) {printf("The triangle is valid");}
    else {printf("Triangle isn't valid");}
    return 0;
}