#include<stdio.h>

void search(int n,int arr[])
{   int item;
    printf("\nEnter a number to check it's presence : ");
    scanf("%d",&item);
    for(int i=0;i<=n-1;i++)
    {
        if(arr[i]==item)
        {
            printf("Item Found");
        }
    }
    //return-1;
}

void insertion(int n,int arr[])
{
    int j=n,k,element;
    printf("\nEnter position : ");
    scanf("%d",&k);
    printf("Enter element : ");
    scanf("%d",&element);
    while (j>=k-1)
    {
        arr[j+1]=arr[j];
        j-=1;
    }
    arr[k-1]=element;
    n+=1;
    //return arr;
}

void deletion(int n,int arr[])
{   
    int j;
    printf("\nEnter position of the element you want to delete : ");
    scanf("%d",&j);
    //j-=1;
    while(j<n)
    {
        arr[j]=arr[j+1];
        j+=1;
    }
    n-=1;
    //return arr;
}

void display_array(int arr[],int n)
{   printf("\nThe array is :\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}

int main()
{
    int n,choice;
    printf("Enter the array length : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of array : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    

    while (n!=0)
    {
        printf("\nEnter your choice : ");
        printf("\n1. Display array");
        printf("\n2. Insert element in array at a position");
        printf("\n3. Delete an element");
        printf("\n4. Search anelement");
        printf("\nChoice : ");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            display_array(arr,n);
            break;

        case 2:
            insertion(n,arr);
            break;

        case 3:
            deletion(n,arr);
            break;
        
        case 4:
            search(n,arr);
            break;

        default:
            printf("Invalid choice");
            break;
        }

    }
    

    return 0;
}