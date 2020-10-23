#include <stdio.h>
#include <stdlib.h>

int Han_Xin_3()
{
	int a, b, c, d;
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
}