#include<stdio.h>

int main()
{
    int a,b,c;
    scanf("%d %d" , &a , &b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("The swapped values are : %d %d" , a ,b );
    return 0;
}