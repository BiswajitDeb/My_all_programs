#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node* left;
	struct node* right;
};

struct node* newNode(int data)
{
	struct node* node = (struct node*)malloc(sizeof(struct node));
	node->data = data;
	node->left = NULL;
	node->right = NULL;

	return (node);
}

void printPostorder(struct node* node)
{
	if (node == NULL)
		return;
	printPostorder(node->left);
	printPostorder(node->right);
	printf("%d ", node->data);
}

void printInorder(struct node* node)
{
	if (node == NULL)
		return;
	printInorder(node->left);
	printf("%d ", node->data);
	printInorder(node->right);
}

void printPreorder(struct node* node)
{
	if (node == NULL)
		return;
	printf("%d ", node->data);
	printPreorder(node->left);
	printPreorder(node->right);
}

int main()
{
	int arr[5];
	printf("\nEnter 5 elements to create the Binary Tree : ");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	struct node* root = newNode(arr[0]);
	root->left = newNode(arr[1]);
	root->right = newNode(arr[2]);
	root->left->left = newNode(arr[3]);
	root->left->right = newNode(arr[4]);

	printf("\nPreorder traversal of the BST is : ");
	printPreorder(root);

	printf("\n\nInorder traversal of BST is : ");
	printInorder(root);

	printf("\n\nPostorder traversal of BST is : ");
	printPostorder(root);
	printf("\n");
	return 0;
}
