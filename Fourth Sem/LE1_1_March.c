#include<stdio.h>
int main()  

{
    int n;
    printf("Enter the size of the array : ")  ;
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements : ");
    for (int m = 0; m < n; m++)
    {
        scanf("%d",&arr[m]);
    }
    
    
    for(int i = 0; i < n; i++) {  
        for(int j = i + 1; j < n; j++) {  
            if(arr[i] == arr[j])  
                printf("The repeated element is : %d \nIt's Highest index is : %d", arr[j],j+1);
        }  
    }  
    return 0;
}  