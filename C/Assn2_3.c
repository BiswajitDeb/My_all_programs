#include<stdio.h>

int main()
{
    int l , b , area , perimeter;
    printf("Enter the length and bredth of the rectangle :\n");
    scanf("%d %d" , &l , &b);
    area=l*b;
    perimeter = 2*(l+b);
    printf("Area is : %d \nPerimeter is :  %d" , area ,perimeter );
    return 0;
}