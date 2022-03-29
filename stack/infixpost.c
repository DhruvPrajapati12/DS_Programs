//Convert infix expression to postfix expression.

#include <stdio.h>
#include "globleStackCharacter.h"
#include <string.h>

int prec(char);

void main()
{
	int n = 30, top=0, count=0,x;
	char str[n], stack[n], arr[30];
	printf("Enter infix expression: ");
	scanf("%s", str);
	
	for(int i=0;i<strlen(str);i++)
	{
		if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			
			arr[count]=str[i];
			count++;
		}
		else if(str[i] == '(')
		{
			push(stack, &top, str[i], n);
		}
		else if(str[i] == ')')
		{
			while((x = pop(stack, &top)) != '(')
				{
					arr[count] = x;
					count++;
				}
		}
		else
		{
			while(prec(peep(stack, &top, 1)) >= prec(str[i]))
			{
				arr[count] = pop(stack, &top);
				count++;
			}
			push(stack, &top, str[i], n);
		}
	}
	arr[count] = pop(stack, &top);
	count++;
	printf("Postfix expression: ");
	for(int i = 0; i <=count; i++)
	{
		printf("%c",arr[i]);
	}
	
}

int prec(char a)
{
	switch(a)
	{
		case '+':
		return 1;

		case '-':
		return 1;
			
		case '*':
		return 2;
		
		case '/':
		return 2;

		case '^':
        	return 3;
	}
	return -1;
}
