#include "main.h"


/**
 * swap_int - function to swap the values of 2 integers
 *
 * @a: First pointer
 * @b: Second pointer
 *
 * Return: no return
 */
void swap_int(int *a, int *b)
{
	int x, y, temp;

	a = &x;
	b = &y;

	temp = *a;
	*a = *b;
	*b = temp;
}
