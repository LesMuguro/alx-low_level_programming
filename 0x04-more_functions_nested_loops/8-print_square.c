#include "main.h"

/**
 * print_square - function to print a square
 *
 * @size: argument to take number of #'s
 * Return: no return value because void
 */
void print_square(int size)
{
	int s;
	int i;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (i = 0; i < size; i++)
	{
		for (s = 0; s < size; s++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
