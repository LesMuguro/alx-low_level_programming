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
	int i;

	i = n % 10;
	if (i < 0)
	{
		_putchar(-i + 48);
		return (-i);
	}
	else
	{
		_putchar(i + 48);
		return (i);
	}
}
