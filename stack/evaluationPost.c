//Evaluation of postfix expreesion.

#include <stdio.h>
#include "globleStackCharacter.h"
#include <string.h>
#include<stdlib.h>

int operation(int a, int b, char c)
{
	switch (c)
            		{
            			case '+': return a+b; 
           		        case '-': return a-b; 
            			case '*': return a*b; 
            			case '/': return a/b; 
            		}
}

void main()
{
	int n = 30, top=0,num;
	char str[n], stack[n],c;
	printf("Enter postfix expression: ");
	scanf("%s", str);

	for(int i = 0; i < strlen(str) ;i++)	
	{
		if(str[i] >= '0' && str[i] <= '9')
		{
			push(stack, &top, str[i], n);
		}	
		if(str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/')
		{
			int b = pop(stack, &top)-'0';
			int a = pop(stack, &top)-'0';
			char c = operation(a, b, str[i])+'0';
			printf("%c\n", c);
			push(stack, &top, c,n);
			
		}
	}
	
	printf("answer is %c\n",pop(stack,&top));
	
}
