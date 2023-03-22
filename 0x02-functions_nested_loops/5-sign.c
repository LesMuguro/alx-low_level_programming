#include "main.h"

/**
 * print_sign - function to print the sign of a number
 *
 * @n: character in ASCII code
 *
 * Return: always 1 for '+' numbers, '-' for negative
 * and '0' for 0
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');

		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');

		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');

		return (-1);
	}

	return (0);
}
