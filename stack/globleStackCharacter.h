//#Stack Operations Header file(for interger and character).

char push(char a[], int *t, char x, int n)
{
	if(*t<n)
	{
		*t=*t+1;
		a[*t]=x;
		//printf("Top is %d\n", *t);
		return '1';
	}
	else
	{
		
		//printf("Stack overflow\n");
		return '0';
	}
}

char pop(char a[], int *t)
{
	if(*t==0)
	{
		//printf("Stack Underflow\n");
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
		//printf("Stack Underflow\n");
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
		//printf("Stack Underflow\n");
		return 0;
	}
	else
	{
		a[*t-index+1] = x;
	}
}
