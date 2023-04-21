#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - assign a random number to the variable n each time it is executed
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("positive\n");
	}
	else if (n == 0)
	{
		printf("zero\n");
	}
	else
		printf{"negative\n");
		}
	Return(0);
