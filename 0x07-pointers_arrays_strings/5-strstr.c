#include "main.h"

/**
 * _strstr - function that locates a substring
 *
 * @haystack: string to be searched
 * @needle: substring to be located
 *
 * Return: return a pointer to the beginning of substring or
 * returns NULL if no substring is found
 *
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
	{
		return (haystack);
	}

	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
				{
					return (haystack);
				}

				i++;

			} while (haystack[i] == needle[i]);
		}

		haystack++;
	}

	return ('\0');
}
