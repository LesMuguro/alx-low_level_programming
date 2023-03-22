#include "main.h"

/**
 * print_to_98 - function to print all natural
 * numbers from n to 98
 *
 * @n: integer to start from
 *
 */
void print_to_98(int n)
{
	for (n = 0; n <= 98; n++)
	{
		_putchar(n);
		_putchar('\n');
	}
}
