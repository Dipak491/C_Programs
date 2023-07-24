#include<stdio.h>
#include<stdlib.h>


struct node
{
	int data;
	struct node *next;
	struct node *prev;
};
typedef struct node NODE,*PNODE,**PPNODE;

void InsertFirst(PPNODE Head, int no)
{
	PNODE newn = NULL;
	newn = (PNODE)malloc(sizeof(NODE));
	newn->data =  no;
	newn->next = NULL;
	newn->prev=NULL;

	if(*Head == NULL) // if ll is empty
	{
		*Head = newn;  
	}
	else //if contain single node 
	{
		(*Head)->prev = newn;  //head chy prev madhe newn |head|->|prev|Data|next| after  |newn|Data|next| 
		newn->next = *Head;  //                            newn->|prev|Data|next| ==>  |Null|data|Head|

		*Head = newn;                      // jithe head hota tithe ata newn |Head|-> |newn|->|node|->|node|
	}
}


void Display(PNODE Head)
{
	printf("Elements are %d\n");
	while(Head != NULL)
	{
		printf("|%d|<=>",Head->data);
		Head = Head->next;

	}
	printf("NULL \n");
}
int main()
{
	PNODE First = NULL;
	InsertFirst(&First,23);
	InsertFirst(&First,23);
	InsertFirst(&First,23);
	
	Display(First);

	return 0;
}