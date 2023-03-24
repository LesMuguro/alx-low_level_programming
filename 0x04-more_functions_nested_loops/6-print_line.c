#include "main.h"

/**
 * print_line - function to print a line
 *
 * @n: argument to decide how many lines are printed
 *
 * Return: no return because void
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('_');
	}
}
