#include <stdio.h>
#include <stdlib.h>

int Han_Xin_4()
{
	int a, b, c, d;
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
}