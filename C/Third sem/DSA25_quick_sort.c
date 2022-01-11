#include <stdio.h>
void quick_sort(int[], int, int);
int main()
{5
    int S, i;
    printf("Enter array size : ");
    scanf("%d", &S);
    int n[100];
    printf("Enter %d elements in Array : \n", S);
    for (i = 0; i < S; i++)
        scanf("%d", &n[i]);
    quick_sort(n, 0, S - 1);
    printf("Elements After Sorting: ");
    for (i = 0; i < S; i++)
        printf(" %d", n[i]);
    return 0;
}
void quick_sort(int n[], int first, int last)
{
    int pivot, j, temp, i;
    if (first < last)
    {
        pivot = first;
        i = first;
        j = last;
        while (i < j)
        {
            while (n[i] <= n[pivot] && i < last)
                i++;
            while (n[j] > n[pivot])
                j--;
            if (i < j)
            {
                temp = n[i];
                n[i] = n[j];
                n[j] = temp;
            }
        }
        temp = n[pivot];
        n[pivot] = n[j];
        n[j] = temp;
        quick_sort(n, first, j - 1);
        quick_sort(n, j + 1, last);
    }
}