#include <stdio.h>
/**
 * main - Entry for the program
 * Return: Always 0 (success)
 */
int main(void)
{
	int i, j, t;

	for (i = 0; i < 8; i++)
	{
		for (j = i + 1; j < 9; j++)
		{
			for (t = j + 1; t <= 9; t++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');

				if (i != 7 || j != 8 || t != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
