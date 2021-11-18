#include<stdio.h>
int main()
{
    int column,row,count=0;
    printf("Enter number of rows for the matrix :");
    scanf("%d",&row);
    printf("Enter number of column of the matrix : ");
    scanf("%d",&column);
    int arr[row][column];

//input array
    for(int i=0;i<row;i++)
    {
        for (int  j = 0; j<column; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        
    }

    for(int i=0;i<row;i++)
	{
		for(int j=i;j<column;j++)
		{
			if(arr[i][j]==0)
			count++;
		}
	}
	if(count==row && count==column)
	printf("The matrix is a lower ttriangular matrix");
	else
	printf("The matrix is not a lower triangular matrix");
//display array
    // for(int i=0;i<row;i++)
    // {
    //     for (int  j = 0; j<column; j++)
    //     {
    //         printf("%d",arr[i][j]);
    //     }
    //     printf("\n");
        
    // }

    return 0;
}