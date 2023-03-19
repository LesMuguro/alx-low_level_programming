#include <stdio.h>

/**
 * main - entry point and function to print hexadecimal in lowercase
 * Return: always 0
 *
 */
int main(void)
{
	int n;
	int a;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}

	for (a = 61; a <= 122; a++)
	{
		putchar(a);
	}

	putchar('\n');

	return (0);
}
