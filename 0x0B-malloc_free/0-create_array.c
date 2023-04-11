#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function to create an array of size size
 * and assigne char c
 *
 * @size: size of array
 * @c: character to assign
 *
 * Return: pointer to array or, if it fails, NULL
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}

	return (str);
}
