#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _memset - function that fills memory with a constant byte
 * @s: memory area to be filled
 * @b: the character to copy
 * @n: the number of times to copy b
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}

/**
 * _calloc - function to allocate memory for an array
 * @nmemb: elements of array
 * @size: bytes of each element
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pointer = malloc(size * nmemb);

	if (pointer == NULL)
		return (NULL);

	_memset(pointer, 0, nmemb * size);

	return (pointer);
}
