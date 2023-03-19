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


	while ((n = getchar()) != EOF)
	{
		n = 0;

		while (n < 10)
		{
			putchar(n);
			n++;
		}
	}

	putchar('\n');

	return (0);
}
