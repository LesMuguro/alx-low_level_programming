#include "main.h"

/**
 * _strncpy - function to copy a string
 *
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: number of bytes
 *
 * Return: destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int b;

	b = 0;

	while (b < n && src[b] != '\0')
	{
		dest[b] = src[b];
		b++;
	}

	while (b < n)
	{
		dest[b] = '\0';
		b++;
	}

	return (dest);
}
