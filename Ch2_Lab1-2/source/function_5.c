#include <stdio.h>
#include <stdlib.h>

int Han_Xin_5()
{
	int a, b, c, d;
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
}