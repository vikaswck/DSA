#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *left;
	struct node *right;
};

void inorder(struct node *root)
{
    
	if(root!=NULL){
		inorder(root->left);
		printf("%d  ",root->data);
		inorder(root->right);
	
	}
}
void insert_left(struct node *ptr,int val)
{
	ptr->left=malloc(sizeof(struct node));
	ptr->left->data=val;
}
void insert_right(struct node *ptr,int val)
{
	ptr->right=malloc(sizeof(struct node));
	ptr->right->data=val;
}
void main()
{
	struct node *root;
  root=malloc(sizeof(struct node));	
  root->data=12;
  insert_left(root,14);
  insert_right(root,16);
  insert_left(root->left,19);
  insert_right(root->right,23);
  insert_left(root->right,65);
  insert_right(root->left,87);
  insert_left(root->left->right,90);
  insert_right(root->right->left,34);
  inorder(root);
  printf("\n");
}

