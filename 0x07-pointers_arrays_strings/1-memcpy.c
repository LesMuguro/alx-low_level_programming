#include "main.h"

/**
 * *_memcpy - function to copy a memory area
 * @dest: pointer to the copied memory area
 * @src: pointer to the original memory area
 * Return: returns a pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int b;

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
