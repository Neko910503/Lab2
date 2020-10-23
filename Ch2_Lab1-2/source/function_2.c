#include <stdio.h>
#include <stdlib.h>

int Han_Xin_2()
{
	int a, b, c, d;
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
}