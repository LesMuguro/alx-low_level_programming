#include "main.h"

/**
 * _atoi - function to convert a string to an integer
 *
 * @s: the string to convert
 *
 * Return: an integer
 */
int _atoi(char *s)
{
	int sign = 1;
	int i = 0;
	unsigned int res = 0; 

	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign *= 1;
		}

		i++;
	}

	while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
	{
		res = (res * 10) + (s[i] - '0');
		i++;
	}

	res *= sign;
	return (res);
}
