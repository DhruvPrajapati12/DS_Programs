//Push, pop, peep, change operations using call by refrence and if condition.

#include <stdio.h>

int push(int [], int *, int, int);
int pop(int [], int *);
int peep(int [], int *, int );
int change(int [], int *, int , int );

void main()
{	
	int n = 5, top = 0, x, po, pee, index, changedElement, cha;
	int s[n];
	while(1)
	{
		printf("Enter the element to push: ");
		scanf("%d", &x);
		if(push(s, &top, x, n)==0)
		{
			break;
		}
		else
		{
			printf("Element pushed\n");
		}
	}
	printf("Original stack: \n");
	for(int i = top; i >= 1 ; i--)
	{
		printf("%d\n", s[i]);
	}
	

	while(1)
	{
		printf("Enter 1 for pop\n");
		scanf("%d", &po);
		if(po == 1)
		{
			int p = pop(s, &top);
			if(p == 0)
				break;
			printf("%d popped successfully\n", p);
			printf("after stack: \n");
			for(int i = top; i >= 1 ; i--)
			{
				printf("%d\n", s[i]);
			}
		}
		else
		{
			break;
		}
	}
		
	printf("Enter 2 for peep\n");
	scanf("%d", &pee);
	if(pee == 2)
	{
		printf("What element do you want to peep enter index: ");	
		scanf("%d", &index);
		printf("%d is peeped\n",peep(s, &top, index));
	}
	

	printf("Enter 3 for change\n");
	scanf("%d", &cha);
	if(cha == 3)
	{
		printf("Enter element do you want to change and index: ");
		scanf("%d", &changedElement);
		scanf("%d", &index);
		change(s, &top, changedElement, index);
	
		printf("After changed\n");
		for(int i = top; i >= 1 ; i--)
		{
			printf("%d\n", s[i]);
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
