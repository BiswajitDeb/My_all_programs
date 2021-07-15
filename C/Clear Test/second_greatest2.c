#include<stdio.h>
#include<limits.h>
int main()
{
    int n,var1=INT_MIN,var2=INT_MIN;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter the %d elements : ",n);
        for(int m=0;m<n;m++)
        {
            scanf("%d",&arr[m]);
        }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>var1)
        {
            var2=var1;      //2nd greatest
            var1=arr[i];    //greatest
        }
        else if(arr[i]>var2 && arr[i]<var1)     {var2=arr[i];}
    }
    printf("The second greatest element of the array  is %d",var2);
    return 0;
}