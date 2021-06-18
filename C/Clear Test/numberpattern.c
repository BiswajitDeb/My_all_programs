#include<stdio.h>
int main()
{
    int t;
    printf("Enter an integer to form the pattern : ");
    scanf("%d",&t);

    for(int i = 1 ; i <= t ; i++)
    {
        for(int space = 1 ; space <= i ; space ++)
        {
            printf(" ");
        }
        for(int j = i ; j <= t ; j ++)
        {
            printf("%d" , j);
        }
        for(int j = t-1 ; j >= i ; j--)
        {
            printf("%d" , j);
        }
        printf("\n");
    }
    for(int i = t - 1 ; i >= 1 ; i--)
    {
        for(int space = i ; space >= 1 ; space --)
        {
            printf(" ");
        }
        for(int j = i ; j <= t ; j ++)
        {
            printf("%d" , j);
        }
        for(int j = t-1 ; j >= i ; j--)
        {
            printf("%d" , j);
        }
        printf("\n");
    }
    return 0;
}