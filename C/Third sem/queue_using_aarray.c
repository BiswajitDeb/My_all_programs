#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};
struct node* front = 0;
struct node* rear = 0;

void enqueue(int x)
{
    struct node* newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data =x;
    newnode->next =0;
    if(front==0 && rear==0)
    {
        front=rear=newnode;
    }
    else
    {
        rear->next = newnode;
        rear=newnode;
    }
}
void display()  
{  
    int i;  
    struct node *ptr;  
    ptr=front;  
    if(ptr == NULL)  
    {  
        printf("Queue is empty\n");  
    }  
    else  
    {  
        printf("Queue elements are :  \n");  
        while(ptr!=NULL)  
        {  
            printf("%d ",ptr->data);  
            ptr = ptr->next;  
        }  
    }  
}
void dequeue()
{
    struct node * temp;
    temp=front;
    if(front==0&&rear==0)
    {
        printf("The list is empty");
    }
    else
    {
        front=front->next;
        free(temp);
    }
}

int main()
{
    int n;
    printf("Enter the number of elements you want to add to the queue : ");
    scanf("%d",&n);
    printf("Enter the elements : ");
    for(int i=0;i<n;i++)
    {
        int temp;
        scanf("%d",&temp);
        enqueue(temp);
    }
    int choice;

    while(2)
    {
        printf("\n1.En-queue\n2.De-queue\n3.Display\n4.Break\n\tEnter Your choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: {int temp;
                     scanf("%d",&temp);
                     enqueue(temp);
                     break;}
            case 2: {dequeue();break;}
            case 3: {display();break;}
            case 4: {break;return 0;}
        }
    }
    return 0;
}