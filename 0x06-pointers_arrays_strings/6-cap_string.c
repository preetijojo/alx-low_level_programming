#include "main.h"
#include <stdio.h>

/**
 * cap_string - capitalizes all words of a string.
 * @s: string to be capitalized
 * Return: a pointer to the changed string
 */

char *cap_string(char *s)
{
	int i = 0;

	if (s[i] >= 'a' && s[i] <= 'z')
	{
		s[i] = s[i] - 32;
	}
	i++;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{

			if (s[i - 1] == ' ' || s[i - 1] == '\t' || s[i - 1] == '\n' ||
					s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.' ||
					s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '"' ||
					s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{' ||
					s[i - 1] == '}')
			{
				s[i] = s[i] - 32;
			}
		}
		i++;
	}

	return (s);
}
