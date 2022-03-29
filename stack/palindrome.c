#include <stdio.h>
#include <string.h>
//#include "globleStackCharacter.h"

#define N 50

int top = -1, front = 0;

int stack[N];

void push(char);

void pop();

int main()

{

    int choice;
 
    char s[N], b;

    while (1)

    {

        printf("1-enter string\n2-exit\n");

        printf("enter your choice\n");

        scanf("%d", &choice);

        switch (choice)

        {

        case 1:

            printf("Enter the String\n");

            scanf("%s", s);

            for (int i = 0;s[i] != '\0';i++)

            {

                b = s[i];

                push(b);

            }

            for (int i = 0;i < (strlen(s) / 2);i++)

            {

                if (stack[top] == stack[front])

                {

                    pop();

                    front++;

                }

                else

                {

                    printf("%s is not a palindrome\n", s);

                    break; 

                }

            }

            if ((strlen(s) / 2)  ==  front)

                printf("%s is palindrome\n",  s);

            front  =  0;

            top  =  -1;

            break;

        case 2:

            return 0;

        default:

            printf("enter correct choice\n");

        }

    }

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


/*
char push(char a[], int *t, char x)
{
	
		*t=*t+1;
		a[*t]=x;
		
	
}

char pop(char a[], int *t)
{
	
		*t=*t-1;
		return a[*t+1];
	
}

void main()
{	
	int n=10, len, top=0;
	char str[n], s[n];
	printf("Enter the string: ");
	scanf("%s", str);
	len = strlen(str);
	push(s, &top, 'e');
	for(int i = 0 ; i<len; i++)
	{
		if(str[i] != 'c')
		{
			push(s, &top, str[i]);
			continue;
		}
		if(str[i] == 'c')
		continue;
		//while(str[i] == pop(s, &top));
		//if(str[i] == ' ' && pop(s, &top) == 'e')
		//printf("valid string\n");
		//else
		//printf("invalid string\n");
	}
	for(int i=top; i>=1; i--)
	{
		printf("%c", s[i]);
	}
}
*/
