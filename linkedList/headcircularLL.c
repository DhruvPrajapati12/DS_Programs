#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
}*head, *last;


int insertFirst(int x)
{
	struct node *newNode;
	newNode = (struct node*)malloc(sizeof(struct node));

	if(newNode == NULL)
	{
		printf("Availability stack underflow\n");
		return 0;
	}

	newNode -> data = x;

	if(head -> next == NULL)
	{
		head -> next = newNode;
		newNode -> next = head;
		newNode = last;
		printf("%d inserted successfully\n",x);
		return 0;
	}

	newNode -> next = head -> next;
	head -> next = newNode;
	printf("%d inserted successfully\n",x);
}

int insertEnd(int x)
{
	struct node *newNode;
	newNode = (struct node*)malloc(sizeof(struct node));

	if(newNode == NULL)
	{
		printf("Availability stack underflow\n");
		return 0;
	}

	newNode -> data = x;
	newNode -> next = head;
	last -> next = newNode;
	last = newNode;
	printf("%d inserted successfully\n",x);
}

int print()
{
	struct node *temp;
	printf("Elements of linkedlist is: ");
	temp = head;
	temp = temp -> next;
	while(temp -> next!= last -> next)
	{
		printf("%d -> ", temp -> data);
		temp = temp -> next;
	}
	printf("%d -> %d\n", last -> data, last -> next -> next -> data);
}

int main()
{
	int x, op=0;
	
	struct node *first;
	struct node *second;

	head = (struct node*)malloc(sizeof(struct node));
	first = (struct node*)malloc(sizeof(struct node));
	second = (struct node*)malloc(sizeof(struct node));
	last = (struct node*)malloc(sizeof(struct node));
	
	head -> next = first;

	first -> data = 20;
	first -> next = second;

	second -> data = 30;
	second -> next = last;

	last -> data = 40;
	last -> next = head;

	while(1)
	{
		printf("1. Insert an element at start\n2. Insert an element at end\n3. Insert an element after address\n4. Print\n5. Exit\n");
		scanf("%d", &op);

		switch(op)
		{
			case 1:
			printf("Enter the element: ");
			scanf("%d", &x);
			insertFirst(x);
			break;

			case 2:
			printf("Enter the element: ");
			scanf("%d", &x);
			insertEnd(x);
			break;

			case 3:
			printf("Enter the element: ");
			scanf("%d", &x);
			//insertAfterAddress(x);
			break;
		
			case 4:
			print();
			break;
	
			case 5:
			return 0;
		}
	}
}
