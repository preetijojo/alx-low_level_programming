#include "main.h"
#include <stdio.h>
/**
 * _isdigit - Entry for program
 * @c: c is a digit
 * Return: o if c is not a digit
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
