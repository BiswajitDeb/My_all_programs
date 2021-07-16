#include<stdio.h>
 
int main()
{
    int mat[3][3];
    int i,j,row,column,temp;
    printf("Enter the number of rows and columnumns of the matrix : ");
    scanf("%d%d",&row,&column);
    printf("Enter the elements of the matrix for each row : \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {   //int k=i+1;
            //printf("The %dth row : ",k);
            scanf("%d",&mat[i][j]);
        }
    }
 
 
    printf("The initial matrix :\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("%d  ",mat[i][j]);
        }
        printf("\n");
    }
//transposing
    for(i=0;i<row;i++)
    {
        for(j=0;j<i;j++)
        {
            temp=mat[i][j];
            mat[i][j]=mat[j][i];
            mat[j][i]=temp;
        }
    }
 
    printf("The transpose of the matrix is :\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("%d  ",mat[i][j]);
        }
        printf("\n");
    }
}