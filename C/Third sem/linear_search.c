#include <stdio.h>
 
int main()
{  int n;
 
    int i,keyn,flag=0;
 
    printf("Enter the array size : ");
    scanf("%d", &n);
    int array[n];
    printf("Enter the elements : \n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
 
    printf("Enter the element you want to search : ");
    scanf("%d", &keyn);
        
    for (i = 0; i < n ; i++)
    {
        if (keyn == array[i] )
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        printf("Element is present in the array at position %d",i+1);
    else
        printf("Element is not present in the array\n");
    
    return 0;
}