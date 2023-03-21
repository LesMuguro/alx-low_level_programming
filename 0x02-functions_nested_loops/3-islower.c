#include "main.h"

/**
 * _islower - function to check for lowercase
 *
 * Return: always 0
 *
 */
int _islower(void)
{
	int c;

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
