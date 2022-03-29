//#Stack Operations Header file(for interger only).

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
