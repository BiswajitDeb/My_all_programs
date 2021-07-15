#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements you want to make an array of : ");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter the elements : ");
        for(int m=0;m<n;m++)
        {
            scanf("%d",&arr[m]);
        }

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                for(int k=j;k<n;k++)
                {
                    arr[k]=arr[k+1];
                }
                n--;
                j--;
            }
        }
    }

    printf("The final array is :\t");
     for(int m=0;m<n;m++)
          {
              printf("%d ",arr[m]);
          }
    return 0;
}