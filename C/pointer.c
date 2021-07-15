#include<stdio.h>
int  main()
// %p and %x for hexadecimal and %d for decimal value
{
    int a = 76;
    int* ptr=&a;
    printf("Address of ptr is : %p\n",&ptr);
    printf("Address of a is : %p\n",&a);
    //or
    printf("Address of ptr is : %\n",ptr);
    printf("The value of a is : %d\n",*ptr);
    printf("The value of a is : %d\n",a);
    return 0;
}