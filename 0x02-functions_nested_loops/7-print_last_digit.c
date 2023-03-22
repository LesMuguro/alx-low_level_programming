#include "main.h"

/**
 * print_last_digit - function to print the last digit of an integer
 *
 * @n: character in ASCII code
 *
 * Return: returns last digit and also always 0
 *
 */
int print_last_digit(int n)
{
	if (n > 0)
	{
		int i = n % 10;

		_putchar (i);
		return (n % 10);
	}

	return (0);
}