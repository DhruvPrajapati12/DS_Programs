//Push Operation using call by value.

#include <stdio.h>

int isFull();
int push(int);

int n = 3, top = 0;
int s[3];

void main()
{
	while(1)
	{
		int x;
		printf("Enter the element to push: ");
		scanf("%d", &x);
		if(push(x)==0)
		{
			break;
		}
		else
		{
			printf("Element pushed\n");
		}
	}
	for(int i = n; i >= 1 ; i--)
	{
		printf("%d ", s[i]);
	}
}

int isFull()
{
	if(top>=n)
		return 1;
	else
		return 0;
}

int push(int x)
{
	if(isFull() == 0)	
	{
		top=top+1;
		s[top] = x;
		return 1;
	}
	else	
	{
		printf("Stack overflow\n");
		return 0;
	}
}
