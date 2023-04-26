#include <stdio.h>
/**
 * main - list all the natural numbers below 10
 * Return: Always 0 (success)
 */
int main(void)
{
	int i, t = 0;

	while (i < 1024)
	{
		if((i % 3 == 0) || (i % 5 == 0))
		{
			t += i;
		}
		i++;
	}
	printf("%d\n, t);
	return (0);
}
