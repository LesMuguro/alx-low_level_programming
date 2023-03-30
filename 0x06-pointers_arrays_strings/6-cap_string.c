#include "main.h"

/**
 * cap_string - function that capitalizes letters
 *
 * @n: argument
 *
 * Return: return a pointer to the string that was changed
 */
char *cap_string(char *n)
{
	int a = 0;

	while (n[a])
	{
		while (!(n[a] >= 'a' && n[a] <= 'z'))
		{
			a++;
		}

		if (n[a - 1] == ' ' ||
		n[a - 1] == '\t' ||
		n[a - 1] == '\n' ||
		n[a - 1] == ',' ||
		n[a - 1] == ';' ||
		n[a - 1] == '.' ||
		n[a - 1] == '!' ||
		n[a - 1] == '?' ||
		n[a - 1] == '"' ||
		n[a - 1] == '(' ||
		n[a - 1] == ')' ||
		n[a - 1] == '{' ||
		n[a - 1] == '}' ||
		a == 0)
		{
			n[a] -= 32;
		}

		a++;
	}

	return (n);
}
