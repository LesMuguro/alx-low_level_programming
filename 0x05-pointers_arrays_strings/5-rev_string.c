#include "main.h"

/**
 * rev_string - function that reverses a string
 *
 * @s: pointer that takes a string
 *
 * Return: no return value
 */
void rev_string(char *s)
{
	int len, a, half;
	char temp;

	for (len = 0; s[len] != '\0'; len++)
	{
		a = 0;
		half = len / 2;
	}

	while (half--)
	{
		temp = s[len - a - 1];
		s[len - a - 1] = s[a];
		s[a] = temp;
		a++;
	}
}
