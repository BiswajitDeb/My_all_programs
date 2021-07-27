#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],rev[n];
    for (int i=0;i<=n-1;i++)    
    {
        scanf("%d",&arr[i]);
    }

    for(int j=n-1;j>=0;j--)
    {
        rev[j]=arr[i];
    }

    for(int k=0;k<=n-1;k++)     {printf("%d",arr[k]);}
    printf("\n");
    for(int l=0;l<=n-1;l++)     {printf("%d",rev[l]);}
    return 0;
}