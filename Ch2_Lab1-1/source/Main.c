#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b, c, d;
	printf("(1)\n");

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if ((a == 0) || (a == 9) || (b == 0) || b == 9)
			{
				printf("X");
			}
			else
			{
				printf("-");
			}
		}
		printf("\n");
	}
	//======================================
	printf("(2)\n");
	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if ((a == 0) || (a == 9) || (a == 1) || (a == 2) || (a == 8) || (a == 7)
				|| (b == 0) || (b == 9) || (b == 1) || (b == 2) || (b == 8) || (b == 7))
			{
				printf("X");
			}
			else
			{
				printf("-");
			}
		}
		printf("\n");
	}
	//======================================
	c = 4;
	d = 5;
	printf("(3)\n");
	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if ((a < 5) && (b == c))
			{
				printf("X");
				c--;
			}
			else if ((a < 5) && (b == d))
			{
				printf("X");
			}
			else if (a == 4)
			{
				printf("X");
			}
			else
			{
				printf("-");
			}
		}
		d++;
		printf("\n");
	}
	//======================================
	c = 1;
	d = 8;
	printf("(4)\n");
	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if ((a > 0) && (a < 5) && (b == c))
			{
				printf("X");
			}
			else if ((a > 0) && (a < 5) && (b == d))
			{
				c++;
				printf("X");
				d--;
			}
			else if (a == 0)
			{
				printf("X");
			}
			else
			{
				printf("-");
			}
		}
		printf("\n");
	}
	//======================================
	c = 9;
	printf("(5)\n");
	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (a == b)
			{
				printf("X");
			}
			else if (b == c)
			{
				printf("X");
				c--;
			}
			else
			{
				printf("-");
			}
		}
		printf("\n");
	}
	system("pause");
}