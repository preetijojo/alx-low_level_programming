#include "main.h"

#include <stdio.h>

/**
 * leet - function that encodes a string into 1337
 * @s: input value
 * Return: n
 */

char *leet(char *s)
{
	int i = 0, j;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4330711";

	while (s[i] != '\0')
	{
		j = 0;
		while (s1[j] != '\0')
		{
			if (s[i] == s1[j])
			{
				s[i] = s2[j];
			}
			j++;
		}
		i++;
	}
	return (s);
}
