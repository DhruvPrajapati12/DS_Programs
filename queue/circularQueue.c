#include <stdio.h>

char cqinsert(char [], int *, int *, char , int );
char cqdelete(char [], int *, int * , int );

int main()
{	
	int n=10, front=0, rear=0, op=0;
	char cqueue[n], ch;
	
	while(op<3)
	{
		printf("1. Insert\n2. Delete\n3. Quit\n");
		scanf("%d", &op);
		switch(op)
		{
			case 1:
			printf("Enter element: ");
			scanf(" %c", &ch);
			cqinsert(cqueue, &front, &rear, ch, n);
			printf("Circular Queue: ");
			
			
				if(front>=rear)
				{
					for(int i=rear; i<=front; i++)
					{
						printf("%c ", cqueue[i]);
					}
				}
				else
				{
					for(int i=front; i <=rear; i++)
					{
						printf("%c ", cqueue[i]);
					}
				}
				
			
			printf("\n");
			break;
			case 2:
			cqdelete(cqueue, &front, &rear, n);
			if(front>=rear)
				{
					for(int i=rear; i<=front; i++)
					{
						printf("%c ", cqueue[i]);
					}
				}
				else
				{
					for(int i=front; i <=rear; i++)
					{
						printf("%c ", cqueue[i]);
					}
				}
			printf("\n");
			break;
			case 3:
			return 0;
		}
	}
	
}

char cqinsert(char arr[], int *front, int *rear, char e, int n)
{
	if(*rear == n-1)
	{
		*rear = 1;
	}
	else	
	{
		*rear = *rear + 1;
	}
	if(*front == *rear)
	{		
		printf("Circular Queue overflow\n");
		return '0';
	}
	else
	{
		arr[*rear] = e;
	}
	if(*front == 0)
	{
		*front = *front + 1;
	}
	printf("Front = %d\n", *front);
	printf("Rear = %d\n", *rear);
}

char cqdelete(char arr[], int *front, int *rear, int n)
{
	if(*front == 0 && *rear == 0)
	{
		printf("Circular Queue is overflow\n");
		return '0';
	}
	char y = arr[*front];
	if(*front == *rear != 0)
	{
		*front = *rear = 0;
		printf("%c deleted successfully\n", y);
		printf("Front = %d\n", *front);
		printf("Rear = %d\n", *rear);
		return '0';
	}
	if(*front == n)
	{
		*front = 1;
	}
	else
	{
		*front = *front + 1;
		printf("%c deleted successfully\n", y);
		printf("Front = %d\n", *front);
		printf("Rear = %d\n", *rear);
		return y;
	}
}


