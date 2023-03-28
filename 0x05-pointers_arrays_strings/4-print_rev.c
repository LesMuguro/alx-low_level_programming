#include "main.h"


/**
 * print_rev - function to print a string in reverse
 *
 * @s: pointer to take the string
 *
 * Return: no return value
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}

	while (i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
