#include <stdio.h>

/**
 * main - entry point and function to print alphabet in reverse
 * Return: always 0
 *
 */
int main(void)
{
	int a = 122;

	while (a >= 97)
	{
		putchar(a - 1);
	}

	putchar('\n');

	return (0);
}
