#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node* left;
	struct node* right;
};

struct node* CreateNode(int data)
{
	struct node* node = (struct node*)malloc(sizeof(struct node));
	node->data = data;
	node->left = NULL;
	node->right = NULL;

	return (node);
}

void PostOrderr(struct node* node)
{
	if (node == NULL)
		return;
	PostOrderr(node->left);
	PostOrderr(node->right);
	printf("%d ", node->data);
}

void InOrder(struct node* node)
{
	if (node == NULL)
		return;
	InOrder(node->left);
	printf("%d ", node->data);
	InOrder(node->right);
}

void  PreOrder(struct node* node)
{
	if (node == NULL)
		return;
	printf("%d ", node->data);
	 PreOrder(node->left);
	 PreOrder(node->right);
}

int main()
{
	int arr[5];
	printf("\nEnter 5 elements to create the Binary Tree : ");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	struct node* root = CreateNode(arr[0]);
	root->left = CreateNode(arr[1]);
	root->right = CreateNode(arr[2]);
	root->left->left = CreateNode(arr[3]);
	root->left->right = CreateNode(arr[4]);

	printf("\nPreorder traversal of the BST is : ");
	 PreOrder(root);

	printf("\n\nInorder traversal of BST is : ");
	InOrder(root);

	printf("\n\nPostorder traversal of BST is : ");
	PostOrderr(root);
	printf("\n");
	return 0;
}
