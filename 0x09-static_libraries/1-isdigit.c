#include "main.h"

/**
 * _isdigit - function to check for a digit that is
 * 0 through 9
 *
 * @c: character in ASCII
 *
 * Return: always 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else if (c < 48 && c > 57)
	{
		return (0);
	}

	return (0);
}
