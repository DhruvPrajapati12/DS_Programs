#include <stdio.h>

char enqueue(char [], int *, int *, char , int );
char dequeue(char [], int *, int * , int );

int main()
{	
	int n=10, front=0, rear=0, op=0;
	char queue[n], ch;
	
	while(op<3)
	{
		printf("1. Enqueue\n2. Dequeue\n3. Quit\n");
		scanf("%d", &op);
		switch(op)
		{
			case 1:
			printf("Enter element: ");
			scanf(" %c", &ch);
			enqueue(queue, &front, &rear, ch, n);
			printf("Queue: ");
			for(int i=1; i <=rear; i++)
			{
				if(i>=1 && i<front)
				printf("_ ");
				else
				printf("%c ", queue[i]);
			}
			printf("\n");
			break;
			case 2:
			dequeue(queue, &front, &rear, n);
			printf("Queue: ");
			for(int i=1; i <=rear; i++)
			{
				if(i>=1 && i<front)
				printf("_ ");
				else
				printf("%c ", queue[i]);
			}
			printf("\n");
			break;
			case 3:
			return 0;
		}
	}
	
}

char enqueue(char arr[], int *front, int *rear, char e, int n)
{
	if(*rear>=n)
	{
		printf("Queue overflow\n");
		return '0';
	}
	else
	{
		*rear=*rear+1;
		arr[*rear] = e;
	}
	if(*front == 0)
		*front=*front+1;
}

char dequeue(char arr[], int *front, int *rear, int n)
{
	if(*front == 0 && *rear == 0)
	{
		printf("Queue underflow\n");
		return '0';
	}
	
	char y = arr[*front];
	
	if(*front == *rear != 0)
	{
		*front = *rear = 0;
		printf("%c deleted successfully\n", y);
	}
	else
	{
		*front = *front + 1;
		printf("%c deleted successfully\n", y);
	}
}


