#include "main.h"

/**
 * _puts_recursion - function to print a string
 *
 * @s: argument for input of char type
 *
 * Return: no return because void
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
	{
		_putchar('\n');
	}
}
