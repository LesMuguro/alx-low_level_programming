#include "main.h"

/**
 * more_numbers - function to print 0 to 14 ten times.
 *
 * Return: no return because void
 */
void more_numbers(void)
{
	int a;
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a >= 10)
			{
				_putchar('1');
			}

			_putchar (a % 10 + '0');
		}
		_putchar('\n');
	}
}
