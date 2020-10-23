#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b;
	printf(" |");
	for (a = 1; a <= 9; a++)
	{
		printf("%3d", a);
	}
	putchar('\n');
	puts("-----------------------------------");
	for (a = 1; a <= 9; a++)
	{
		printf("%d|", a);
		for (b = 1; b <= 9; b++)
		{
			printf("%3d", a*b);
		}
		putchar('\n');
	}
	system("pause");
	return 0;
}