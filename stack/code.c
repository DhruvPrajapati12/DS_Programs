#include <stdio.h>
#include <string.h>
//#include "globleStackCharacter.h"

#define N 50

int top = 0;
int stack[N];
void push(char);
void pop();

int main()
{
	char str[50];
	int c=0;
	printf("Enter the string: ");
	scanf("%s", str);
	
	push('e');
	
	for(int i=0; i<strlen(str); i++)
	{
		if(str[i] =='a')
		{
			push(str[i]);
			c++;
		}
		if(str[i] =='b')
		{
			pop();
			if(str[i+1] == 'a')
				{
					printf("Invalid string\n");
					return 0;
				}
	}	}
	
	
	if(top == 1)
		printf("Valid string\n");
	else
		printf("Invalid string\n");
}

void push(char a)
{
    top++;
    stack[top]  =  a;
}

void pop()
{
    top--;
}
