#include "main.h"


/**
 * print_alphabet - function to print the alphabet in lowercase
 *
 * Return: always 0
 *
 */
void print_alphabet(void)
{
	int a;
	int print_alphabet = a;

	for (a = 97; a <= 122; a++)
	{
		_putchar(a);
		_putchar('\n');
	}

}

int main(void)
{
	_putchar(print_alphabet());

	return (0);
}
