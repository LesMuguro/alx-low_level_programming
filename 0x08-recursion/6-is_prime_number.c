#include "main.h"

int is_divisible(int num, int div);

/**
 * is_prime_number - function to print if a number is a prime number or not
 *
 * @n: the number to evaluate
 *
 * Return: return 1 if n is a prime number, and 0 if not prime
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - function that calculates if a number is prime
 * recursively
 *
 * @n: number to evaluate
 * @i: iteration
 *
 * Return: returns 1 if n is prime, and 0 if not prime
 */
int actual_prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}

	if (n % i == 0 && i > 0)
	{
		return (0);
	}

	return (actual_prime(n, i - 1));
}
