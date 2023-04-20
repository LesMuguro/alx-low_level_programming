#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - function that prints the name using a pointer
 * to a function
 *
 * @name: the string to print
 * @f: the pointer to the function
 *
 * Return: no return because void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}

	f(name);
}

