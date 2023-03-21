#include "main.h"

/**
 * _islower - displays 1 if the input is a lowercase
 * character. Other cases show 0
 *
 * c: The character in ASCII code
 *
 * Return: always 1 for lowercase and 0 for the rest
 */
int _islower(int c)
{
	for (c = 97; c <= 122; c++)
	{
		_putchar(48);
	}

	for (c = 65; c <= 90; c++)
	{
		_putchar(49);
	}

	return (0);
}
