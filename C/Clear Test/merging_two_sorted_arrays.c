#include<stdio.h>

int sort(int arr[],int n)
{
   for (int i = 0; i < n-1; i++)
      {
        for (int j = i+1; j < n; j++)
            {
                if (arr[i] > arr[j])
                    {
                        int temp  = arr[i];
                        arr[i] = arr[j];
                        arr[j] = temp;
                    }
            }
      }
}

int main()
{
    int n,m,j;
    printf("Enter the length of the 1st array : ");
    scanf("%d",&n);
    int arr1[n];
    printf("Enter the elements of the 1st array : ");
    for(int i=0;i<n;i++)    {scanf("%d",&arr1[i]);}

    printf("Enter the length of the 2nd array : ");
    scanf("%d",&m);
    int arr2[m];
    printf("Enter the elements of the  2nd array : ");
    for(int i=0;i<m;i++)    {scanf("%d",&arr2[i]);}
sort(arr1,n);
sort(arr2,m);

int k=n+m;
int arr[k];
  	for(int i = 0; i < n; i++)
  	{
      	arr[i] = arr1[i];
  	}
    for (int i = n; i < k; i++)
    {
       arr[i] = arr2[i];
    }
sort(arr,k);
printf("The final sorted array is : ");
for (int i=0;i<k;i++)   {printf("%d ",arr[i]);}
    return 0;
}