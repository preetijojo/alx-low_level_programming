#include <stdio.h>
#include "main.h"
/**
 * print_times_table - prints the n times table
 * @n: If n is greater than 15 or less than 0
 */
void print_times_table(int n)
{
	int i, j, r;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				res = 1 * j;
				if (j == 0)
				{
					printf("%d", r);
				}
				else if (r < 10)
				{
					printf("   %d", r);
				}
				else if (r < 100)
				{
					printf("  %d", r);
				}
				else
				{
					printf(" %d", r);
				}
			}
			printf("\n");
		}
	}
}
