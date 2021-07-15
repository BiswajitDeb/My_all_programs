#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements : ");
    for (int i=0;i<n;i++)   {scanf("%d",&arr[i]);}


    for (int i = 0; i < n; i++) 
    {
        int temp;
        for (int j = i+1; j < n; j++) 
            {     
                if(arr[i] > arr[j]) 
                {    
                    temp = arr[i];    
                    arr[i] = arr[j];    
                    arr[j] = temp;    
                }     
            }     
    }    
     
    int count = 0;
    for (int i = 0; i < n; i++)
    {    
      while (i<(n-1) && arr[i]==arr[i + 1])     {i++;}   // Moving the index when duplicate is found
      count++;
    }
    printf("The number of distinct elements in the array is : %d",count);
    return 0;
}
