#include "main.h"

/**
 * _strlen - function to print the length of a string
 *
 * @s: pointer
 *
 * Return: always 0
 */
int _strlen(char *s)
{
	int sl = 0;
	while (s[sl])
	{
		sl++;
	}

	return (sl);
}
