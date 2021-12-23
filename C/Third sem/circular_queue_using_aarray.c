#include<stdio.h>

void enqueue(int x,int queue[],int front, int rear,int n)
{
    if(front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear]=x;
    }
    else if(((rear+1)%n)==front)
    {
        printf("The queue is full");
    }
    else 
    {
        rear = (rear+1)%n;
        queue[rear]=x;
    }
}

void dequeue(int queue[],int front, int rear)
{
    if(front == -1 && rear == -1)
    {
        printf("Queue underflow");
    }
    else if(front == rear)
    {
        front = rear = -1;
    }
    else
    {
        printf("The dequeued element is : %d",queue[front]);
        front=(front+1)%n;
    }
}
int main()
{
    int n;
    printf("Enter the array size : ");
    scanf("%d",&n);
    
    int queue[n];
    int front=-1,rear=-1;
    return 0;
}