#include "main.h"

/**
 * reverse_array - function to print an array in reverse
 *
 * @a: pointer to an array
 * @n: argument for the number of bytes
 *
 * Return: no return statement
 */
void reverse_array(int *a, int n)
{
	int b;
	int c;

	for (b = 0; b < n--; b++)
	{
		c = a[b];
		a[b] = a[n];
		a[n] = c;
	}
}
