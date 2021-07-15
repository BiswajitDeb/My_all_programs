#include<stdio.h>

int main()
{
    int arr[1000];
    for (int i =0;i<19;i++)
        arr[i]=i+1;

    // int *pr=&arr[13];

    // printf("The address of the element of the array : %d",*pr);
    printf("Address is at : %d\n",&arr[14]);
    printf("Address is at : %p",&arr[14]);
    return 0;
}