#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point of the program
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;


	if (last_digit > 5)
	{
		printf("Last digit of 98 is 8 and is  greater than 5\n");
	}
	else if (last_digit == 0)
	{
		printf("Last digit of 980 is 0 and is  0\n");
	}
	else if (last_digit < 6 && last_digit != 0)
	{
		printf("Last digit of -98 is 8 and is less than 6 and not 0\n");
	}
	return (0);
}

