#include "main.h"
#include <stdio.h>

/**
 * _strncat - function that concatenates two strings.
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *dest_start = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	for (int i = 0; i < n && *src != '\0'; i++)
	{
		*dest++ = *src++;
	}

	*dest = '\0';
	return (dest_start);
}
