#include "main.h"

/**
 * _puts - function that prints a string with a new line
 *
 * @str: pointer to the string
 *
 * Return: no return
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
