#include "main.h"

/**
 * _isalpha - a function to check of a character is
 * in the alphabet.
 *
 * @c: the character in ASCII code
 * Return: 1 for alphabet and 0 for non-alphabet characters
 *
 */
int _isalpha(int c)
{
	if ((c <= 90 && c >= 65) || (c <= 122 && c >= 97))
	{
		return (1);
	}
	else
	{
		return (0);
	}

	return (0);
}
