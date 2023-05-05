#include "main.h"
#include <stdio.h>

/**
 * leet - function that encodes a string into 1337.
 * @s: input value
 * Return: n
 */

char *leet(char *s)
{
	int i, j;
	char letters[] = "aAeEoOtTlL";
	char leet[] = "433071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == letters[j])
			{
				s[i] = leet[j / 2];
				break;
			}
		}
	}

	return (s);
}
