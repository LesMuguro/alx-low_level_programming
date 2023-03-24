#include "main.h"

/**
 * print_numbers - function to print 0 to 9 and
 * then a new line
 *
 * Return: no return value because void
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		_putchar(i);

		if (i == 57)
		{
			_putchar('\n');
		}
	}
}
