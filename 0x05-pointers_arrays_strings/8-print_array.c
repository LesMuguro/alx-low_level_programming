#include <stdio.h>

/**
 * print_array - function to print n elements of an array
 * of integers
 *
 * @a: pointer for the input array
 * @n: pointer for the length of the array
 *
 * Return: no return value
 */
void print_array(int *a, int n)
{
	int array_index;

	for (array_index = 0; array_index < n; array_index++)
	{
		printf("%d", a[array_index]);
		if (array_index != (n - 1))
		{
			printf(", ");
		}
	}
	putchar('\n');
}
