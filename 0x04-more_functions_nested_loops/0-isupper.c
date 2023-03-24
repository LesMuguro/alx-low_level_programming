#include "main.h"

/**
 * _isupper - function to check if a character is uppercase
 *
 * @c: character in ASCII
 *
 * Return: the result;
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 95 && c <= 122)
	{
		return (0);
	}

	return (0);
}
