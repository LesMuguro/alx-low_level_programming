#include "main.h"

/**
 * print_diagonal - function to print a diagonal line
 *
 * @n: argument for the number of lines to print
 *
 * Return: always 0;
 */
void print_diagonal(int n)
{
	int i;
	int s;

	if (n <= 0)
	{
		_putchar('\n');
	}

	for (i = 0; i < n; i++)
	{
		for (s = 0; s < i; s++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}

}
