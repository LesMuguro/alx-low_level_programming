#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - function to combine input together.
 * @s1: first input to concatenate
 * @s2: second input to concatenate
 * Return: s1 and s2 concatenated
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, orig;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	i = orig = 0;
	while (s1[i] != '\0')
	{
		i++;
	}

	while (s2[orig] != '\0')
	{
		orig++;
	}

	concat = malloc(sizeof(char) * (i + orig + 1));

	if (concat == NULL)
	{
		return (NULL);
	}

	i = orig = 0;
	while (s1[i] != '\0')
	{
		concat[i] = s1[i];
		i++, orig++;
	}

	concat[i] = '\0';
	return (concat);
}
