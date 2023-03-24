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
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}

	_putchar('\n');
}
