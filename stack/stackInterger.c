//Push, pop, peep, change operations using call by refrence and using switch case(Operations performed and integer).

#include <stdio.h>

int push(int [], int *, int, int);
int pop(int [], int *);
int peep(int [], int *, int );
int change(int [], int *, int , int );

void main()
{	
	int n = 5;
	int s[n+1],top = 0;
	int x, op=0, i;
	printf("Welcome to stack operations\n");
	
	while(op < 5)
	{
		printf("1. Push\n2. Pop\n3. Peep\n4. Change\n5. Quit\n");
		scanf("%d", &op);
		switch(op)
		{
			case 1:
			printf("Enter element to push\n");
			scanf("%d", &x);
			push(s, &top, x, n);
	
			printf("Original stack: \n");
			for(int i = top; i >= 1 ; i--)
			{
				printf("%d\n", s[i]);
			}
	

			break;

			case 2:
			printf("Element at top of stack is %d\n", pop(s, &top));
			break;
			
			case 3:
			printf("Enter position\n");
			scanf("%d", &i);
			printf("Element at %d position is %d\n", i, peep(s, &top, i));
			break;

			case 4:
			printf("Enter position and value to be updated\n");
			scanf("%d %d", &i, &x);
			change(s, &top, x, i);
		
			printf("Edited stack: \n");
			for(int i = top; i >= 1 ; i--)
			{
				printf("%d\n", s[i]);
			}
	
			break;

			case 5:
			printf("Thank You\n");
			break;
		}
	}
	


}

int push(int a[], int *t, int e, int n)
{
	if(*t < n)	
	{
		*t=*t+1;
		a[*t] = e;
		printf("Top is %d\n", *t);
		return 1;
	}
	else	
	{
		printf("Stack overflow\n");
		return 0;
	}
}

int pop(int a[], int *t)
{
	if(*t == 0)
	{
		printf("Stack Underflow\n");
		return 0;
	}
	else
	{
		*t = *t - 1;
		return a[*t+1];
	}
}

int peep(int a[], int *t, int index)
{
	if(*t-index+1 <= 0)
	{
		printf("Stack Underflow\n");
		return 0;
	}
	else
	{
		return a[*t-index+1];
	}
}
int change(int a[], int *t, int x, int index)
{
	if(*t-index+1 <= 0)
	{
		printf("Stack Underflow\n");
		return 0;
	}
	else
	{
		a[*t-index+1] = x;
	}
}
