#include "main.h"

/**
 * _strncat - function to print n of src
 *
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: integer for number of bytes
 *
 * Return: destination and source string concatenated
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;

	while (dest[a] != '\0')
	{
		a++;
	}

	b = 0;

	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];

		a++;
		b++;
	}

	dest[a] = '\0';

	return (dest);
}
