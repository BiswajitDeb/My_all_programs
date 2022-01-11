#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int arr2D[15], *arr1D;
    int m[3][5];
    int i, j;

    printf("Enter the elements of the 3*5 Array (row major) : \n");
    for (i = 0; i < 3; ++i)
    {
        for (j = 0; j < 5; ++j)
        {
            scanf("%d", &m[i][j]);
        }
    }

    arr1D = (int *)malloc(3 * 5 * sizeof(int));

    for (i = 0; i < 3; ++i)
    {
        for (j = 0; j < 5; ++j)
        {

            arr1D[i * 5 + j] = m[i][j];
        }
    }

    printf("The respective 1D array for the Array : ");

    for (i = 0; i < 3 * 5; ++i)
    {
        printf("%d ", arr1D[i]);
    }
    return 0;
}