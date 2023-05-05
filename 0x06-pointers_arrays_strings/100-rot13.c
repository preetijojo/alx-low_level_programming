#include "main.h"
#include <stdio.h>

/**
 * rot13 - a function that encodes a string.
 * @s: pointer
 * Return: *s
 */

char *rot13(char *s)
{
	int i = 0, j;

	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (s[i] != '\0')
	{
		j = 0;
		while (alphabet[j] != '\0')
		{
			if (s[i] == alphabet[j])
			{
				s[i] = rot13[j];
				break;
			}
			j++;
		}
		i++;
	}

	return (s);
}
