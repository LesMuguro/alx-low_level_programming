#include "main.h"


/**
 * print_alphabet_x10 - function to print lowercase
 * alphabet 10 times
 *
 *
 */
void print_alphabet_x10(void)
{
	int i = 1;

	while (i <= 10)
	{
		for (a = 97; a <= 122; a++)
		{
			_putchar(a);
		}

		_putchar('\n');
	}
}
