#include <stdio.h>  
# define n 5
int queue[n];  
int front=-1;  
int rear=-1;  

void enqueue(int element)  
{  
    if(front==-1 && rear==-1)
    {  
        front=0;  
        rear=0;  
        queue[rear]=element;  
    }  
    else if((rear+1)%n==front)
    {  
        printf("Queue overflow");  
    }  
    else  
    {  
        rear=(rear+1)%n;  
        queue[rear]=element; 
    }  
}  
  

int dequeue()  
{  
    if((front==-1) && (rear==-1))  
    {  
        printf("\nQueue underflow");  
    }  
 else if(front==rear)  
{  
   printf("\nThe dequeued element is : %d", queue[front]);  
   front=-1;  
   rear=-1;  
}   
else  
{  
    printf("\nThe dequeued element is : %d", queue[front]);  
   front=(front+1)%n;  
}  
}  

void display()  
{  
    int i=front;  
    if(front==-1 && rear==-1)  
    {  
        printf("\n Queue is empty");  
    }  
    else  
    {  
        printf("\nElements in a Queue are :");  
        while(i<=rear)  
        {  
            printf("%d,", queue[i]);  
            i=(i+1)%n;  
        }  
    }  
}  
int main()  
{  
    int choice=1,x;
      
    while(choice<4 && choice!=0)
    {  
        printf("\n1. Enqueue : ");  
        printf("\n2. Dequeue : ");  
        printf("\n3. Display queue : ");  
        printf("\n\tEnter your choice : ");  
        scanf("%d", &choice);  
      
    switch(choice)  
        {  
          
        case 1:  
                printf("Enter an element : ");  
                scanf("%d",&x);  
                enqueue(x);  
                break;  
            case 2:  
                dequeue();  
                break;  
            case 3:  
                display();  
  
        }
    }  
    return 0;  
}  