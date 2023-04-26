#include "main.h"
/**
 * times_table - prints the 9 times table
 */
void times_table(void)
{
	int i, j, r;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			r = i * j;
			if (j == 0)
			{
				_putchar('0');
			}
			else if (r < 10)
			{
				_putchar(' ');
				_putchar('0' + r);
			}
			else
			{
				_putchar('0' + r / 10);
				_putchar('0' + r % 10);
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
