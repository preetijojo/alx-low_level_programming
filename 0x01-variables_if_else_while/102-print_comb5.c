#include <stdio.h>
/**
 * main - Entry for program
 * Return: always 0 (success)
 */
int main(void)
{
	int i, t;

	for (i = 0; i <= 99; i++)
	{
		for (t = i; t <= 99; t++)
		{
			if (i != t)
			{
				putchar(i / 10 + '0');
				putchar(i % 10 + '0');
				putchar(' ');
				putchar(t / 10 + '0');
				putchar(t % 10 + '0');
				if (i != 98 || t != 99)
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
