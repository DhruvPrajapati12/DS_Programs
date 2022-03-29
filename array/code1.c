//Write a program to calculate the address of element in 1D array.

#include <stdio.h>

void main()
{
	int base, index, add, c = 4;
	printf("Enter base address: ");
	scanf("%d", &base);
	printf("Enter index of the element: ");
	scanf("%d", &index);
	add = base + c*(index - 1);
	printf("Address of %dth element is %d\n", index, add);
}
