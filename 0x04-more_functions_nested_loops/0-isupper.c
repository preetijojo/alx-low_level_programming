#include "main.h"
#include <stdio.h>
/**
 * _isupper - Entry for the program
 *
 * @c: c is uppercase
 *
 * Return: 0 if c is not uppercase
 *
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
