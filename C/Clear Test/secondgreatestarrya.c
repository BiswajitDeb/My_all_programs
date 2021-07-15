#include<stdio.h>

int del_duplicate(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                for(int k=j;k<n;k++)    
                {
                    arr[k]=arr[k+1];    //shifting to the left
                }
                n--; 
                j--;
            }
            else {;}
        }
    }
}

int main()
{
    int n,sum=0;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter the %d elements : ",n);
        for(int m=0;m<n;m++)
        {
            scanf("%d",&arr[m]);
        }

int arrlen = sizeof(arr) / sizeof(arr[0]);
for (int p = 0; p < arrlen - 1; p++) 
{
    for (int q = p + 1; q < arrlen; q++) 
    {
        if (arr[p] == arr[q])   //checking if it has duplicate elements
        {   
            sum=sum++;
            // int final=del_duplicate(arr,n);
            // printf("The 2nd greatest alement of the array is : %d",arr[arrlen-2]);
        }
        // else {sum=sum+0;}
    }
}

        //sorting the array (bubble sort)
        for (int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(arr[j]<arr[i])
                {
                    int temp=arr[j];
                    arr[j]=arr[i];
                    arr[i]=temp;
                }
            }
        }


int final=del_duplicate(arr,n); //making it sorted set here

if(sum!=0)  {printf("The 2nd greatest alement of the array is : %d",arr[arrlen-3]); }
else        {printf("The 2nd greatest alement of the array is : %d",arr[arrlen-4]); }

    //int final=del_duplicate(arr,n);
    //printf("%d",arr[n-2]);
    //int arrlen = sizeof(arr) / sizeof(int);

    //printf("The 2nd greatest alement of the array is : %d",arr[arrlen-2]); 
    //  for(int m=0;m<arrlen-1;m++)
    //       {
    //           printf("%d ",arr[m]);
    //       }

    return 0;
}