#include "main.h"

/**
 * _strchr - function that finds a character in a string
 * @s: pointer to a string that is to be searched
 * @c: character to be found
 *
 * Return: NULL if c isn't found and returns a pointer
 * to the first occurence of the character
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	return ('\0');
}
