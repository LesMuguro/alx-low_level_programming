#include <stdio.h>

/**
 * main - function that prints single digit
 * numbers from 0 to 9
 *
 * Return: always 0
 */
int main()
{
	int n = 0;

	while (n < 10)
	{
		putchar(n);
		n++;
	}

	putchar('\n');

	return (0);
}
