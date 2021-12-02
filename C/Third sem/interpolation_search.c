#include <stdio.h>
#include <stdlib.h>

int search(int a[], int bottom, int top, int search_element) 
{
	int mid;
	while (bottom <= top)
	{
		mid = bottom + (top - bottom) * ((search_element - a[bottom]) / (a[top] - a[bottom]));
		if (search_element == a[mid])
			return mid + 1;
		if (search_element < a[mid])
			top = mid - 1;
		else
			bottom = mid + 1;
	}
	return -1;
}
 
int main() 
{
	int i, num;
	int search_element, pos;
		
	printf("\nEnter total elements : ");
	scanf("%d", &num);
    int arr[num];
 
	printf("Enter Elements : ");
	for (i = 0; i < num; i++)
		{
            scanf("%d", &arr[i]);
        }
 
	printf("The array is : ");
	for (i = 0; i < num; i++)
		{
            printf("%d ", arr[i]);
        }
 
	printf("\nEnter an element to search : ");
	scanf("%d", &search_element);
	pos = search(&arr[0], 0, num, search_element);

	if (pos == -1)
		printf("\nElement %d not found in the array \n", search_element);
	else
		printf("\nElement %d found at position %d in the array \n", search_element, pos);
	return 0;
}