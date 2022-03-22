#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array : ")  ;
    scanf("%d",&n);
    int A[n];
    printf("Enter the elements : ");
    for (int m = 0; m < n; m++)
    {
        scanf("%d",&A[m]);
    }
    
    int key;
    printf("Enter a key : ");
    scanf("%d",&key);

    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if((A[i]*A[i] + A[j]*A[j]) == key)
            {
                printf("The Indexes are : %d %d\n",i,j);

            }
            // i+=1;
        }
    }

    return 0;
}