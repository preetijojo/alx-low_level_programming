#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	char c = 'a';
	int i = 0;

	while (i++ < 10)
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		c = 'a';
		i++;
		if (i == 10 || (i == 9 && c == 'z'))
		{
			_putchar('\n');
		}
	}
}
