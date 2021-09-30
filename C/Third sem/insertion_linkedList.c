#include<stdio.h>
#include<stdlib.h>

typedef struct block{
    int data;
    struct block* next;
}Node;


// void createList(int n)
// {
//     struct Node *newNode, *temp;
//     int data, i;

//     head = (struct Node *)malloc(sizeof(struct Node));

//     if(head == NULL)
//     {
//         printf("Unable to allocate memory.");
//         exit(0);
//     }

//     // Input data of Node from the user
//     printf("Enter the data of Node 1: ");
//     scanf("%d", &data);

//     head->data = data; 
//     head->next = NULL; 

//     // Create n - 1 Nodes and add to list
//     temp = head;
//     for(i=2; i<=n; i++)
//     {
//         newNode = (struct Node *)malloc(sizeof(struct Node));

//         /* If memory is not allocated for newNode */
//         if(newNode == NULL)
//         {
//             printf("Unable to allocate memory.");
//             break;
//         }

//         printf("Enter the data of Node %d: ", i);
//         scanf("%d", &data);

//         newNode->data = data; 
//         newNode->next = NULL; 

//         temp->next = newNode;
//         temp = temp->next;    
//     }
// }




void append(Node** h, int d)
{
    Node* t = (Node*)malloc(sizeof(Node));
    t->data = d;
    t->next = NULL;
    if(*h == NULL)
        *h = t;
    else
    {
        Node* temp = *h;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = t;
    }
}

Node* search_by_position(Node* h, int position)
{
    int i = 1;
    while(h != NULL)
    {
        if(i == position)
            return h;
        h = h->next;
        i++;
    }
    return NULL;
}

void insert_next_to(Node* position, int d)
{
    if(position == NULL)
        return;
    Node* t = (Node*)malloc(sizeof(Node));
    t->data = d;
    t->next = position->next;
    position->next = t;
}

void display(Node* h)
{
    while(h != NULL)
    {
        printf("%d, ", h->data);
        h = h->next;
    }
    printf("NULL\n");
}



int main()
{
    
    Node* head = NULL;
    int data, option, position;
    // printf("Enter the number of elements for the Linked-list : ");
    // scanf("%d",&n);
    // createList(n);
    // head=createlinkedlist(n);
    while(option!=4)
    {
        printf("1. Append value\n");
        printf("2. Insert value\n");
        printf("3. Display the Linked-list\n");
        printf("4. Break\n");
        printf("Choose an option: ");
        scanf("%d", &option);
        switch(option)
        {
            case 1:
                printf("Enter data: ");
                scanf("%d", &data);
                append(&head, data);
                break;
            case 2:
                printf("Enter position: ");
                scanf("%d", &position);
                Node* p = search_by_position(head, position);
                printf("Enter data: ");
                scanf("%d", &data);
                if(p == NULL)
                    printf("Not Found\n");
                else
                    insert_next_to(p, data);
                break;
            case 3:
                display(head);
                break;
            case 4:
                break;
            default:
                printf(" option\n");
        }
    }
    return 0;
}


