#include "main.h"
/**
 * print_last_digit -  last digit of a number
 * @n: The input number as an integer
 * Return: last didgit
 */
int print_last_digit(int n)
{
	int l = n % 10;

	if (l < 0)
	{
		l = -l;
	}
	_putchar('0' + l);
	return (l);
}
