#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function to print the sum of 2 diagonals of a
 * square matrix of integers
 *
 * @a: pointer to the matrix of integers
 * @size: size of the matrix
 *
 * Return: no return value because void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i];
		a += size;
	}

	a -= size;

	for (i = 0; i < size; i++)
	{
		sum2 += a[i];
		a -= size;
	}

	printf("%d, %d\n", sum1, sum2);
}
