//Convert infix expression to prefix expression.

#include <stdio.h>
#include "globleStackCharacter.h"
#include <string.h>

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

void fun(char str[], int count , char arr[], int n, int top, char stack[])
{
	char x;
	for(int i=0;i<strlen(str);i++)
	{
		if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			arr[count] = str[i];
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
	
	printf("Prefix expression: ");
	for(int i = count-1; i >=0; i--)
	{
		printf("%c",arr[i]);
	}
	printf("\n");
}

void main()
{
	int n = 20, top=0, count=0;
	char str[n], stack[n], arr[n],rstr[strlen(str)];
	printf("Enter infix expression: ");
	scanf("%s", str);
	int rcount = 0;

	for(int i=strlen(str)-1; i>=0;i--)
	{
		if(str[i] == ')')
		{
			rstr[rcount] = '(';
			rcount++;
		}
		else if(str[i] == '(')
		{
			rstr[rcount] = ')';
			rcount++;
		}
		else
		{
		rstr[rcount] = str[i];
		rcount++;
		}
	}
	printf("Reverse string is: ");
	printf("%s", rstr);
	
	printf("\n");
	

	fun(rstr,count ,arr, n, top, stack);

	
}


