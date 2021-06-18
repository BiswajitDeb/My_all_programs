#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter the number of rows : ");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
        {
            for(j=0;j<i;j++)    {printf("%d",(i+j)%2);} //%2 will convert it to binary numbers 
            printf("\n");
        }
    return 0;
}