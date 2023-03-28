#include "main.h"

/**
 * puts2 - function to print every other character in a
 * string starting with the first character
 *
 * @str: pointer to take the string
 *
 * Return: no return value
 */
void puts2(char *str)
{
	long int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i += 2;
	}

	_putchar('\n');
}
