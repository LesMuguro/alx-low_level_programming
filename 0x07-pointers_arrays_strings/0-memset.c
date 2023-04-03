#include "main.h"

/**
 * *_memset - function to fill memory with a constant byte
 *
 * @s: pointer to memory area
 * @b: constant byte
 * @n: number of values from user
 *
 * Return: always 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
