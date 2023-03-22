#include "main.h"

/**
 * times_table - print the 9 times table
 *
 * Return: none
 *
 */
void times_table(void)
{
	int a, b, c;

	for (a = 0; a <= 9; a++)
	{
		_putchar(a * 9);

		if (a == 9)
		{
			_putchar(a);
			continue;
		}
		_putchar(',');
		_putchar(' ');
	}
}
