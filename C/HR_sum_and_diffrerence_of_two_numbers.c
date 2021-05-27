#include<stdio.h>
int main()
{
    float a,b,m,n;
    scanf("%f %f",&a,&b);
    scanf("%f %f",&m,&n);
    printf("%0.0f %0.0f\n", a+b,a-b);
    printf("%0.1f %0.1f",m+n,m-n);
    return 0;
}