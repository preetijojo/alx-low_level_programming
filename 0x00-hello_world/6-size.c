#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: Prints the size of various types on the computer
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long int d;
	long long int e;
	float f;

	printf("Size of a char: %ld byte(s)\n", sizeof(c));
	printf("Size of an int: %ld byte(s)\n", sizeof(i));
	printf("Size of a long int: %ld byte(s)\n", sizeof(d));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(e));
	printf("Size of a float: %ld byte(s)\n", sizeof(f));
	return (0);
}
