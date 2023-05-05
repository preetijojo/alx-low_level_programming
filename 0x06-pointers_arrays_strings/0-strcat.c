#include "main.h"
#include <stdio.h>

/**
 * _strcat - function that concatenates two strings.
 * @dest: input value
 * @src: input value
 * Return: void
 */

char *_strcat(char *dest, char *src)
{

	char *temp = dest;

	while (*temp != '\0')

	{
		temp++;
	}

	while (*src != '\0')
	{
		*temp++ = *src++;
	}

	*temp = '\0';

	return (dest);

}
