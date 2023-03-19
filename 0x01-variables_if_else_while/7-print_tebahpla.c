#include <stdio.h>

/**
 * main - entry point and function to print alphabet in reverse
 * Return: always 0
 *
 */
int main(void)
{
	int a;

	for (a = 0; a > 97; a--)
	{
		putchar(a - 122);
	}

	putchar('\n');

	return (0);
}
