//Push, pop, peep, change operations using call by refrence and using switch case and using header file.

#include <stdio.h>
#include "globleStackOP.h"

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
			break;

			case 5:
			printf("Thank You\n");
			break;
		}
	}
	


}

