#include<stdio.h>
#include<stdlib.h>

int A[30],pos,item;
int n=0;

void createArray();
void displayy();
void insert();
void delete();
void search();

void createArray()
{
    int i;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &A[i]);
    }
}



void displayy()
{
    int i;
    if(n==0)
    {
        printf("No elements to be display\n");
        return;
    }
    printf("Array elements are:\n");
    for(i=0;i<n;i++)
    printf("%d ",A[i]);
}

void insert()
{
    int i;
    if(n==6)
    {
        printf("Array is full. insert is not possible\n");
        return;
    }
    do
    {
        printf("Enter a valid position where element to be inserted:\n");
        scanf("%d",&pos);
    } while (pos>n);
    printf("Enter the value to be inserted:");
    scanf("%d",&item);
    for(i=n-1; i>=pos ; i--)
    {
        A[i+1] = A[i];
    }
    A[pos]=item;
    n=n+1;
    displayy();  
}

void delete()
{
    int i;
    if(n==0)
    {
        printf("Array is empty !!!\n");
        return;
    }
    do
    {
        printf("Enter a valid position from where element to be deleted : \n ");
        scanf("%d",&pos);
    } while (pos>=n);
    item=A[pos];
    printf("Deleted element is : %d \n",item);
    for( i = pos; i< n-1; i++)
    {
        A[i]=A[i+1];
    }
    n=n-1;
    displayy();
}
void search()
{ 
    int i;
    printf("Enter the item to be searched : \n");
    scanf("%d",&item);
    for(i=0;i<n;i++)
    {
        if(A[i]==item)
        {
        printf("Element Found\n");
        }
    }
}
int main()
{
    int ch;

    printf("\n1.Create an array\n");
    printf("2.Display the elements of the array\n");
    printf("3.Insert an element at a given position\n");
    printf("4.Delete an element at a given position\n");
    printf("5.Search an element\n");
    printf("6.Exit\n");
    printf("CHOOSE ANY ONE OPTION : ");
    do
    {
        printf("Enter the choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: createArray();
            break;
            case 2: displayy();
            break;
            case 3: insert();
            break;
            case 4: delete();
            break;
            case 5: search();
            break;
            case 6:
            break;
        }
    }
    while (ch != 6);
    return 0;
}