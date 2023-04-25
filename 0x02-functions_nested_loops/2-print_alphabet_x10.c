#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	char letter = 'a';

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 26; j++)
		{
			_putchar(letter + j);
		}
		_putchar('\n');
	}
}
