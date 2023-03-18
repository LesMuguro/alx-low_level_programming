#include <stdio.h>
#include <stdlib.h>


/**
 * main - function that prints the alphabet in lowercase
 * Return: always 0
 *
 */
int main(void)
{
	char a;
	char new_line;

	new_line = '\n';

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}

	putchar(new_line);

	return (0);
}
