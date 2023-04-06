#include "main.h"

/**
 * _strlen_recursion - function to print the length of a string
 *
 * @s: string to be measured
 *
 * Return: always 0
 */
int _strlen_recursion(char *s)
{
	int l = 0;

	if (*s)
	{
		l++;
		l += _strlen_recursion(s + 1);
	}

	return (l);
}
