#include "main.h"

/**
 * _print_rev_recursion - function to reverse a string
 *
 * @s: string to be outputed
 *
 * Return: no return because void
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
