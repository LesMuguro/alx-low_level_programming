#include <stdio.h>
#include <stdlib.h>


/**
 * main - function that prints the alphabet in lowercase
 * Return: always 0
 *
 */
int main(void)
{
	char a; /* variable for alphabet */
	char new_line; 

	new_line = '\n'; /* variable to put a new line after a-z are printed */

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}

	putchar(new_line);

	return (0);
}
