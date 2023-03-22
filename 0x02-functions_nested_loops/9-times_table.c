#include "main.h"

/**
 * times_table - print the 9 times table
 *
 * Return: none
 *
 */
void times_table(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		_putchar(a * 57);

		if (a == 9)
		{
			_putchar(a);
			continue;
		}
		_putchar(',');
		_putchar(' ');
	}
}
