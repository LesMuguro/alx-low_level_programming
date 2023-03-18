#include <stdio.h>
#include <stdlib.h>

/**
 * main - function prints the alphabet in lower
 * and upper case and then a new line
 *
 * Return: always 0
 */
int main(void)
{
	char a;
	char new_line;
	char upper_char;

	a = 'a';
	upper_char = a - 32;
	new_line = '\n';

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
		putchar(upper_char);
	}

	putchar(new_line);

	return (0);
}

