#include <stdio.h>

char enqueue_rear(char [], int *, int *, char , int );
char dequeue_front(char [], int *, int * , int );
char enqueue_front(char [], int *, int *, char , int );
char dequeue_rear(char [], int *, int * , int );


int main()
{	
	int n=5, front=0, rear=0, op=0;
	char queue[n], ch;
	
	while(op<5)
	{
		printf("1. Enqueue from rear\n2. Dequeue from front\n3. Enqueue from front\n4. Dequeue from rear\n5. Quit\n");
		scanf("%d", &op);
		switch(op)
		{
			case 1:
			printf("Enter element: ");
			scanf(" %c", &ch);
			enqueue_rear(queue, &front, &rear, ch, n);
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
			dequeue_front(queue, &front, &rear, n);
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
			printf("Enter element: ");
			scanf(" %c", &ch);
			enqueue_front(queue, &front, &rear, ch, n);
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
			case 4:
			dequeue_rear(queue, &front, &rear, n);
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
			case 5:
			return 0;
		}
	}
	
}

char enqueue_rear(char arr[], int *front, int *rear, char e, int n)
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

char dequeue_front(char arr[], int *front, int *rear, int n)
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
		return y;
	}
}

char enqueue_front(char arr[], int *front, int *rear, char e, int n)
{
	if(*front==0)
	{
		printf("Queue is empty\n");
		return '0';
	}
	if(*front==1)
	{
		printf("Queue is overflow\n");
		return '0';
	}
	else
	{
		*front = *front-1;
		arr[*front] = e;
		return '1';
	}
	
}

char dequeue_rear(char arr[], int *front, int *rear , int n)
{
	if(*rear==0)
	{
		printf("Queue is underflow\n");
	}
	char y = arr[*rear];
	if(*rear==*front)
	{
		*rear=*front=0;
		printf("%c deleted successfully\n", y);
	}
	else
	{
		*rear=*rear-1;
		printf("%c deleted successfully\n", y);
		return y;
	}
}

