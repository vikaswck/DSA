#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;
};
struct node *header,*last;
void create(int val)
{
	struct node *temp;
	temp=malloc(sizeof(struct node));
	scanf("%d",&val);
	temp->data=val;
	temp->link=NULL;
	if(header==NULL)
	{
		header=last=temp;
		return;
	}
	else{
		last->link=temp;
		last=temp;
	}
	
}
void show()
{
	struct node *t;
	t=header;
     while(t!=NULL)
	 {
         printf("->%d",t->data);
		 t=t->link;
	 }
	 printf("\n");
}
void main()
{
	int n;
	printf("enter the no of nodes\n");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		create(i);
	}
	//create(46);
	//create(41);
	//create(42);
	//create(43);
	//create(34);
	show();
}