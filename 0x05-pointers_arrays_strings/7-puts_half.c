#include "main.h"

/**
 * puts_half - function to print half of a string followed
 * by a new line
 *
 * @str: pointer for the input string
 *
 * Return: no return value
 */
void puts_half(char *str)
{
	int full_str, half_str;

	full_str = 0;

	while (str[full_str] != '\0')
	{
		full_str++;
	}

	half_str = full_str / 2;

	if (full_str % 2 == 1)
	{
		half_str++;
	}

	while (half_str < full_str)
	{
		_putchar(str[half_str]);
		half_str++;
	}

	_putchar('\n');
}
