#include<stdio.h>

int main()
{
    int a,b,c;
    scanf("%d %d" , &a , &b);
    c=a;
    a=b;
    b=c;
    printf("The swapped values are : %d %d" , a ,b );
    return 0;
}