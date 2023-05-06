#include "main.h"
#include <stdio.h>
/**
 * print_number - function that prints an integer.
 * @n: int
 * Return: 0
 */

void print_number(int n)
{
	if (n < 0)
	{
		putchar('-');
		n = -n;
	}
	if (n / 10 != 0)
	{
		print_number(n / 10);
	}
	putchar('0' + n % 10);
}
