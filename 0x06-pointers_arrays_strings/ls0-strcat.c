#include "main.h"
#include <stdio.h>

/**
 * _strcat -  function that concatenates two strings.
 * @dest: input value
 * @src: input values
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	int j;
	int t;

	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}

	t = 0;
	while (src[t] != '\0')
	{
		dest[j] = src[t];
		j++;
		t++;
	}

	dest[j] = '\0';
	return (dest);
}
