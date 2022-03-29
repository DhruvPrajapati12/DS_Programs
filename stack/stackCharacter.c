//Push, pop, peep, change operations using call by refrence and using switch case(Operations performed on character and integer).

#include <stdio.h>
#include <string.h>

char push(char [], int *, char, int);
char pop(char [], int *);
char peep(char [], int *, int );
char change(char [], int *, char , int );

void main()
{
	int n = 7, top = 0, x, op=0, i;
	char s[n], c;
	
	/*while(1)
	{
		printf("Enter element\n");
		scanf(" %c", &c);
		
		if(push(s, &top, c, n)=='0')
		{
			break;
		}
		else
		{
			printf("%c pushed successfully\n", c);
			printf("\n");
		}
	}
	printf("Original stack: \n");
	for(int i=top; i>=1; i--)
	{
		printf("%c\n", s[i]);
	}*/

	printf("Welcome to stack operations\n");
	
	while(op < 5)
	{
		printf("1. Push\n2. Pop\n3. Peep\n4. Change\n5. Quit\n");
		scanf("%d", &op);
		switch(op)
		{
			case 1:
			printf("Enter element to push\n");
			scanf(" %c", &x);
			push(s, &top, x, n);
	
			printf("Original stack: \n");
			for(int i = top; i >= 1 ; i--)
			{
				printf("%c\n", s[i]);
			}
	

			break;

			case 2:
			printf("Element at top of stack is %c\n", pop(s, &top));
			break;
			
			case 3:
			printf("Enter position\n");
			scanf("%d", &i);
			printf("Element at %d position is %c\n", i, peep(s, &top, i));
			break;

			case 4:
			printf("Enter position and value to be updated\n");
			scanf("%d %c", &i, &x);
			change(s, &top, x, i);
		
			printf("Edited stack: \n");
			for(int i = top; i >= 1 ; i--)
			{
				printf("%c\n", s[i]);
			}
	
			break;

			case 5:
			printf("Thank You\n");
			break;
		}
	}
}

char push(char a[], int *t, char x, int n)
{
	if(*t<n)
	{
		*t=*t+1;
		a[*t]=x;
		printf("Top is %d\n", *t);
		return '1';
	}
	else
	{
		
		printf("Stack overflow\n");
		return '0';
	}
}

char pop(char a[], int *t)
{
	if(*t==0)
	{
		printf("Stack Underflow\n");
		return '0';
	}
	else
	{
		*t=*t-1;
		return a[*t+1];
	}
}

char peep(char a[], int *t, int index)
{
	if(*t-index+1<=0)
	{
		printf("Stack Underflow\n");
		return '0';
	}
	else
	{
		return a[*t-index+1];
	}
}

char change(char a[], int *t, char x, int index)
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
