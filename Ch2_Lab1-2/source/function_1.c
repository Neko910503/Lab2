#include <stdio.h>
#include <stdlib.h>

int Han_Xin_1()
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
}