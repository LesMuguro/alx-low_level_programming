#include <stdio.h>


/**
 * main - entry point and function to
 * print 0 to 9 using putchar()
 *
 * Return: always 0
 */
int main(void)
{
	for (n = 0; n < 10; n++)
	{
		putchar(*n);
	}

	putchar('\n');

	return (0);
}
