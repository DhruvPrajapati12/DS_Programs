#include<stdio.h>
#include<string.h>
void main ()
{
  char a[20], b[20], arr1[3][3];
  int i, j, flagx, flagy, temp, l1, powerx, powery, cfct;
  printf ("Enter first polynomial\n");
  for (i = 0; i < 20; i++)
    {
      scanf ("%c", &a[i]);
      if (a[i] == ',')
	break;
    }
  /*printf("Enter second polynomial\n");
     for(i=0;i<20;i++)
     {
     scanf("%c",&b[i]);
     if(b[i]==NULL)
     break;
     } */
  l1 = strlen (a) - 1;
  printf ("\n%d\n", l1);
  //l2=strlen(b);
  for (i = 0; i < l1; i++)
    {
      if (a[i] == '+' || a[i] == '-')
	{
	  j = i - 1;
	  while (a[j] != '+' && a[j] != '-' && j != 0)
	    {
	      temp = a[j];
	      j--;
	      if (a[j] == 'x')
		{
		  flagx = 1;
		  powerx = temp;
		}
	      else if (a[j] == 'y')
		{
		  flagy = 1;
		  powery = temp;
		}
	      else if (a[j] >= '0' && a[j] <= '9')
		{
		  cfct = a[j];
		  arr1[atoi (powerx)][atoi (powery)] = atoi (cfct);
		}
	      else
		break;

	    }
	}
    }
  for (i = 0; i < 3; i++)
    {
      for (j = 0; j < 3; j++)
	{
	  printf ("%d ", arr1[i][j]);
	}
      printf ("\n");
    }

}
