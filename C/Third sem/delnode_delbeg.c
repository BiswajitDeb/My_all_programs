#include <stdio.h>
#include<stdlib.h>
struct node
 {
	int info;
	struct node* link;
};
struct node* start = NULL;
void insrtfrnt()
{
	int data;
	struct node* temp;
	temp = malloc(sizeof(struct node));
	printf("\nEnter number to be inserted : ");
	scanf("%d", &data);
	temp->info = data;
	temp->link = start;
	start = temp;
}
void insrtEnd()
{
	int data;
	struct node *temp, *head;
	temp = malloc(sizeof(struct node));
	printf("\nEnter number to"
		" be inserted : ");
	scanf("%d", &data);
	temp->link = 0;
	temp->info = data;
	head = start;
	while (head->link != NULL) {
		head = head->link;
	}
	head->link = temp;
}
void insrtpos()
{
	struct node *temp, *newnode;
	int pos, data, i = 1;
	newnode = malloc(sizeof(struct node));
	printf("\nEnter position and data :");
	scanf("%d %d", &pos, &data);
	temp = start;
	newnode->info = data;
	newnode->link = 0;
	while (i < pos - 1) {
		temp = temp->link;
		i++;
	}
	newnode->link = temp->link;
	temp->link = newnode;
}
void del1st()
{
	struct node* temp;
	if (start == NULL)
		printf("\nList is empty\n");
	else {
		temp = start;
		start = start->link;
		free(temp);
	}
}
void delpos()
{
	struct node *temp, *position;
	int i = 1, pos;
	if (start == NULL)
		printf("\nList is empty\n");
	else {
		printf("\nEnter index : ");
		scanf("%d", &pos);
		position = malloc(sizeof(struct node));
		temp = start;
		while (i < pos - 1)
        {
			temp = temp->link;
			i++;
		}
		position = temp->link;
		temp->link = position->link;
		free(position);
	}
}
void display()
{
    struct node* temp;
    if (start == NULL)
        printf("\nList is empty\n");
    else
        {
        temp = start;
        while (temp != NULL)
        {
            printf("%d ",temp->info);
            temp = temp->link;
        }
    }
}
int main()
{
	int option;
	while (1)
        {
        printf("\n");
        printf("1.Display the List\n");
        printf("2.Instert at the beginning\n");
		printf("3.Insert at the end\n");
		printf("4.Insert at any position\n");
		printf("5.Delete 1st element\n");
		printf("6.Delete element by position\n");
        printf("7.Exit\n");
		printf("\nEnter Choice : ");
        //printf("\n");
		scanf("%d", &option);

		switch (option)
		{
        case 1:
            printf("\nThe linked list is : ");
            display();
            break;
		case 2:
			insrtfrnt();
			break;
		case 3:
			insrtEnd();
			break;
		case 4:
			insrtpos();
			break;
		case 5:
			del1st();
			break;
		case 6:
			delpos();
			break;
		case 7:
			//exit(1);
			break;
		default:
			printf("\nInvalid choice\n");
		}
	}
	return 0;
}