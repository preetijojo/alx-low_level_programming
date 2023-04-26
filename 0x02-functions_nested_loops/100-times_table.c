#include <stdio.h>
#include "main.h"
/**
 * print_times_table - prints the n times table
 * @n: If n is greater than 15 or less than 0
 */
void print_times_table(int n)
{
	if (n < 0 || n > 15)
	{
		return;
	}
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			printf("%d ", i * j);
		}
		pintf("\n");
	}
}
