#include "main.h"

/**
 * _islower - displays 1 if the input is a lowercase
 * character. Other cases show 0
 *
 * @c: The character in ASCII code
 *
 * Return: always 1 for lowercase and 0 for the rest
 */
int _islower(int c)
{
	if (c <= 122 && c >= 97)
	{
		_putchar(49);
	}
	else
	{
		_putchar(48);
	}
}
