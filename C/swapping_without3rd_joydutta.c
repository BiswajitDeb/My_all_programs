#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Eneter two integers :\n");
    scanf("%d %d" , &a , &b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("The swapped values are : %d %d" , a ,b );
    return 0;
}