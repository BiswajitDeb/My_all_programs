#include <stdio.h>
int insert(int arr[],int n)
{
    int pos,element,n;
    n+=1;
    printf("Enter the position you want to insert new element : ");
    scanf("%d",&pos);
    printf("Enter the element : ");
    scanf("%d",&element);
    for (int i = n-1; i >= pos; i--)
		arr[i] = arr[i - 1];

	arr[pos - 1] = element;

	// print the updated array
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");


    return arr;
}

int main()
{
	int i, n;
    printf("Enter the array size : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements : ");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
	
	return 0;
}
