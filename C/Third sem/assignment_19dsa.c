#include <stdio.h>
#include <stdlib.h>
#define max 5
int q[max], front = -1, rear = -1;
void enqueue();
void dequeue();
void display();
int main()
{
    int ch;
    printf("\n1. Enqueue or Insert");
    printf("\n2. Dequeue or Delete");
    printf("\n3. display");
    printf("\n4. Break");
    while (1)
    {
        printf("\n Enter Choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("Wrong choice");
        }
    }
}
void enqueue()
{
    int data;
    if (rear == max - 1)
    {
        printf("Overflow");
    }
    else
    {
        if (front == -1)
        {
            front = 0;
        }
        printf("Enter Element : ");
        scanf("%d", &data);
        rear++;
        q[rear] = data;
    }
}
void dequeue()
{
    if (front == -1 || front > rear)
    {
        printf("\nQueue UnderFlow");
    }
    else
    {
        printf("\n Dequeue : %d", q[front]);
        front++;
    }
}
void display()
{
    int i;
    if (front == -1)
    {
        printf("\nQueue is Empty");
    }
    else
    {
        printf("Elements : ");
        for (i = front; i <= rear; i++)
        {
            printf("%d ", q[i]);
        }
    }
}