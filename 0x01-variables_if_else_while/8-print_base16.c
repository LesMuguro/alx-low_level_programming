#include <stdio.h>

/**
 * main - entry point and function to print hexadecimal in lowercase
 * Return: always 0
 *
 */
int main(void)
{
	int n;
	int a = 61;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}


	for (a = 97; a <= 102; a++)
	{
		putchar(a);
	}

	putchar('\n');

	return (0);
}
