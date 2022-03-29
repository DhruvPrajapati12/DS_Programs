#include <stdio.h>

/*
void main()
{
	int a[4][4] = {{0,0,0,0},{0,5,0,3},{0,0,0,0},{0,4,0,0}};
	int arr[3][3];
	int count = 0;
	printf("Matrix is : \n");
	for(int i = 0; i <4; i++)
	{
		for(int j= 0; j<4; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}

	for(int i = 0; i <4; i++)
	{
		for(int j= 0; j<4; j++)
		{
			if(a[i][j] != 0)
			{
				arr[2][count] = a[i][j];	
				arr[0][count] = i+1;
				arr[1][count] = j+1;
				count++;
			}
		}
		
	}
	
	printf("Sparse matrix is: \n");
	for(int i = 0; i <3; i++)
	{
		for(int j= 0; j<3; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
*/

void main()
{
	int m,n;
	printf("Enter the number of row: ");
	scanf("%d", &m);
	printf("Enter the number of columns: ");
	scanf("%d", &n);
	int a[m][n];

	for(int i = 0; i <m; i++)
	{
		for(int j = 0; j<n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	
	int count = 0;
	printf("Matrix is : \n");
	for(int i = 0; i <m; i++)
	{
		for(int j= 0; j<n; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}

	for(int i = 0; i <m; i++)
	{
		for(int j= 0; j<n; j++)
		{
			if(a[i][j] != 0)
			{
				count++;
			}
		}
		
	}
	

	int arr[3][count];
	int c = 0;
	for(int i = 0; i <m; i++)
	{
		for(int j= 0; j<n; j++)
		{
			if(a[i][j] != 0)
			{
				arr[2][c] = a[i][j];	
				arr[0][c] = i+1;
				arr[1][c] = j+1;
				c++;
			}
		}
		
	}

	printf("Sparse matrix is: \n");
	for(int i = 0; i <3; i++)
	{
		for(int j= 0; j<count; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

