#include<stdio.h>
#include<stdlib.h>
void create();
void freq();
struct node   
{  
    int data;  
    struct node *next;   
};
struct node*head=NULL,*tail=NULL;
int main()
{
	int ch;
	while(1)
	{
		printf("press 1 for  create \n2 for frequency");
		printf("\nplease enter ur choice ");
		scanf("%i",&ch);
		switch(ch)
		{
			case 1:create();
			break;
			case 2:freq();
			break;
			default :printf("you have entered the wrong choice try again!");
			return 0;
		}
	}


}
void create()
{
	int n,i;
	printf("please enter the number of nodes which you want to create ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		struct node* temp=(struct node *)malloc(sizeof(struct node));
		printf("enter your data ");
		scanf("%d",&temp->data);
		temp->next=NULL;
		if(i==0)
		{
			head=temp;
			tail=temp;
		}
		else 
		{
			tail->next=temp;
			tail=temp;
		}
	}
 } 

 void freq()
 {
 	struct node*head,*temp,*ptr;
 	int count=0;
 	printf("enter the node to print its frequency");
 	scanf("%d",&ptr->data);
 	temp=head;
 	
 	while(temp!=NULL)
 	{
 		if(temp=ptr->data)
 		count=count+1;
 		temp=temp->next;
	}
return count;
 }
