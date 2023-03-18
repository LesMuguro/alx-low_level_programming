#include <stdio.h>

/**
 * main - function that prints single digit
 * numbers from 0 to 9
 *
 * Return: always 0
 */
int main(void)
{
	int n;

	n = 0;

	while (n < 10)
	{
		++n;
		putchar(n);
	}

	putchar('\n');

	return (0);
}
