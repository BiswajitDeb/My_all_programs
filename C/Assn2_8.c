#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter any two numbers: \n");
    scanf("%d%d", &a, &b);

    printf("input value a = %d\n", a);
    printf("input value b = %d\n", b);
    a ^= b;
    b ^= a;
    a ^= b;

    printf("swapped value of a = %d\n", a);
    printf("swapped value of b = %d\n", b);

    return 0;
}