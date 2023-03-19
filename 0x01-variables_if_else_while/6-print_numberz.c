#include <stdio.h>


/**
 * main - entry point and function to
 * print 0 to 9 using putchar()
 *
 * Return: always 0
 */
int main(void)
{
	int n;


	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}

	putchar('\n');

	return (0);
}
