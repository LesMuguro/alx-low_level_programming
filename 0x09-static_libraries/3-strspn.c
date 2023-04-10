#include "main.h"

/**
 * _strspn - function to print the number of characters
 * in a prefix
 *
 * @s: pointer to string to be searched
 * @accept: pointer to prefix to be measured
 *
 * Return: returns the number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	int bytes = 0;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				bytes++;
				break;
			}
			else if (accept[i + 1] == '\0')
			{
				return (bytes);
			}
		}
		s++;
	}

	return (bytes);
}
