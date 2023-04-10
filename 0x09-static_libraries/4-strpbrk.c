#include "main.h"

/**
 * _strpbrk - function that searches a string for a set of bytes.
 *
 * @s: string to be searched
 * @accept: bytes to be searched for
 *
 * Return: returns pointer to the matched byte. Returns NULL if
 * no set is matched
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}

		s++;
	}

	return ('\0');
}
