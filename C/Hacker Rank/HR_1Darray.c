#include<stdio.h>
int main()
{
    int n,count=0;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<=n-1;i++)
    {
        scanf("%d",&arr[i]);
        count=count+arr[i];
    }
    printf("%d",count);
    return 0;
}