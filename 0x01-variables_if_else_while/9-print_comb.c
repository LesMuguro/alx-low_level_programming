#include <stdio.h>

/**
 * main - entry point and function to print a
 * combination of 0 to 9 using loops
 *
 * Return: always 0
 */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		if (n == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
