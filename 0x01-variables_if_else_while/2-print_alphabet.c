#include <stdio.h>


/**
 * main - function that prints the alphabet in lowercase
 * Return: always 0
 *
 */
int main(void)
{
	char a;

	a = 'a';

	if (a <= 'z')
	{
		putchar(a++);
	}
	else
	{
		putchar("Error\n");
	}

	Return(0);
}
