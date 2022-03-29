#include <stdio.h>
#include <ctype.h>
#include<math.h>

struct expression
{
    int coeffi;
    int value;
};

struct expression a[50],b[50],c[50];

void main()
{
	int d1,d2;
	int k = 0, l=0, m=0; 
	printf("Enter the highest degree of polynomial expression1:");
	scanf("%d",&d1);

	for(int i=0;i<=d1;i++)
   	{   
        printf("Enter the coefficient of x^%d :",i);
        scanf("%d",&a[i].coeffi);
        a[k++].value = i;
        }

	printf("Enter the highest degree of polynomial expression2:");
   	scanf("%d",&d2);

   	for(int i=0;i<=d2;i++)
   	{
        printf("Enter the coefficient of x^%d :",i);
        scanf("%d",&b[i].coeffi);
        b[l++].value = i;
   	}

	printf("Expression 1 = %d",a[0].coeffi);
   	for(int i=1;i<=d1;i++)
   	{
        printf("+ %dx^%d",a[i].coeffi,a[i].value);
   	}        
 
   	printf("\nExpression 2 = %d",b[0].coeffi);
   	for(int i=1;i<=d2;i++)
   	{    
        printf("+ %dx^%d",b[i].coeffi,b[i].value);
   	}

	if(d1>d2)
   	{
       	for(int i=0;i<=d2;i++)
        {
        c[m].coeffi = a[i].coeffi + b[i].coeffi;                  
	c[m].value= a[i].value;
        m++;
        }   
        for(int i=d2+1;i<=d1;i++)
        {    
        c[m].coeffi = a[i].coeffi;
        c[m].value = a[i].value;
        m++;
        }  
   	}                              
        else                   
   	{                                  
       	for(int i=0;i<=d1;i++)
        {                            
        c[m].coeffi = a[i].coeffi + b[i].coeffi;
        c[m].value = a[i].value;
        m++;
        }          
        for(int i=d1+1;i<=d2;i++)
        {    
        c[m].coeffi = b[i].coeffi;
        c[m].value = b[i].value;
        m++;
        }
   	}
	printf("\nExpression after addition  = %d",c[0].coeffi);
   	for(int i=1;i<m;i++)
   	{
        printf("+ %dx^%d",c[i].coeffi,c[i].value);
   	}

}
/*void main()
{
	char a[20], b[20], x1[5], x2[5], count1 = 0, count2 = 0;
	printf("Enter first polynomial: ");
	for(int i = 0 ; i <20; i++)
	{
		scanf("%c", &a[i]);
		if(a[i] == ' ')
			break;
	}
	printf("Enter second polynomial: ");
	for(int i = 0 ; i <20; i++)
	{
		scanf("%c", &b[i]);
		if(b[i] == ' ')
			break;
	}
	
	for(int i = 0 ; i <20; i++)
	{
		if(isdigit(a[i]))
			x1[count1] = a[i];
			count1++;	
	}
	for(int i = 0 ; i <20; i++)
	{
		if(isdigit(b[i]))
			x2[count2] = b[i];	
			count2++;
	}
	for(int i = 0 ; i <count1; i++)
	{
		printf("%d, ", x1[i]);	
	}
	for(int i = 0 ; i <count2; i++)
	{
		printf("%d, ", x2[i]);	
	}
	
}*/
