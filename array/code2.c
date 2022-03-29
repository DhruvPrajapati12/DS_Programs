//Write a program to calculate the address of element in 2D array.

#include <stdio.h>

int main()
{
	int i,j,n,m,base,c=4,add;
	int major;
	printf("Enter the base address a[1][1]: ");
	scanf("%d", &base);
	printf("Enter the number of row: ");
	scanf("%d", &n);
	printf("Enter the number of columns: ");
	scanf("%d", &m);
	printf("Enter index of the element in form of a[i][j]: ");
	scanf("%d %d", &i, &j);
	printf("Wheather the matix is row major of column major.\n");
	printf("Enter 1 for row major or Enter 0 for column major: ");
	scanf("%d", &major);
	if(major == 1)
	{
		add = base + c*((i-1)*m + (j-1));
	}else if(major == 0)
	{
		add = base + c*((j-1)*n + (i-1));
	}
	printf("Address of a[%d][%d]th element is %d\n", i,j, add);
}
