#include "main.h"

/**
 * print_most_numbers - function to print 0 to 9 without 4 and 2
 *
 * Return: no return statement because void
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i != 50 && i != 52)
		{
			_putchar(i);
		}
	}

	_putchar('\n');
}
