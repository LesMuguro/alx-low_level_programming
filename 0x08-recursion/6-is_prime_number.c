#include "main.h"

int is_divisible(int num, int div);

/**
 * is_prime_number - function to print the prime number
 *
 * @n: the input
 *
 * Return: return 0 is the number is divisible or -1 if the
 * number is not divisible
 */
int is_prime_number(int n)
{
	if (num % div == 0)
	{
		return (0);
	}

	if (div == num / 2)
	{
		return (1);
	}

	return (is_divisible(num, div + 1));
}
