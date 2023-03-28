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
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}

		i++;
	}

	_putchar('\n');
}
