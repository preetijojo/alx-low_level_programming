#include "main.h"
#include <stdio.h>
/**
 * print_numbers - Prints the numbers from 0 to 9
 * Return: Always 0
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{

		putchar(i);
	}
	putchar('\n');
}

int main(void)
{
	print_numbers();
	return (0);
}
