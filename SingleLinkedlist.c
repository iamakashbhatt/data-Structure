//Single Lisked List
#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int data;
	struct node* link ;
};
struct node* root= NULL ;
int len ;
void append(void);
void addatbegin(void);
void addatafter(void);
int length();
void display();
void delection();
void main()
{	while(1)
	{
		int ch;
		printf("single Linked list Operation  : \n");
		printf("1 : Append \n");// add node at the end of availble node
		printf("2 : Addatbegin \n");
		printf("3 : Addatafter \n");
		printf("4 : Length \n");
		printf("5 : Display \n");
		printf("6 : Delection \n");
		//printf("7 : Quit \n");
					
		printf("Enter your Choice");
		scanf("%d",&ch);
			
			switch(ch)
				{
						case 1 : append();
						break;
						case 2 : addatbegin();
						break;
						case 3 : addatafter();
						break;
						case 4 : len = length();
					 		   	break;
						case 5 : display();
						break;
						case 6 : delection();
						break;
					//	case 7 : quit();
					//	break;
						default : printf("invalid");
				}
					
	}
}
void append()
{
	struct node* temp;
temp = (struct node*)malloc(sizeof(struct node));

printf("Enter the node data");
scanf("%d",&temp->data);
temp->link = NULL;
 if(root == NULL)// list is empty	
 { // if block execulate only for the first node
 	root = temp;
 	
  } 
  else// to add the node at the last of the linked list
  {
  struct node* p;
  p = root;
  while(p->link!=NULL)
  {
  	p = p->link;
  }
	p->link = temp;	
  }
}
int length()
{	
	int count = 0;
	struct node* temp ;
	
	temp = root ;
	while(temp!= NULL)
	{
		count++;
		temp = temp->link;
		
	}
	return count;
}
void display ()
{
	struct node* temp ;
	temp= root;
	if( temp == NULL)
	{
		printf("list is empty...\n\n");
	}
	else
	{
		while(temp!=NULL)
		{
			printf("%d-->",temp->data);
			temp = temp->link;
			
		}
	printf("\n \n ");
	}
	
}
void addatbegin()
{
}
void addatafter()
{
	
}
void delection()
{
}
