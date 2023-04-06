#include "main.h"

/**
 * find_sqrt - function to find the natural
 * square root of a number that's inputed
 *
 * @num: number to find the square root of
 * @root: root to be tested
 *
 * Return: the square root if the number has a natural square root or return -1
 * if the number doens't have a natural square root
 */
int find_sqrt(int num, int root);

int find_sqrt(int num, int root)
{
	if ((root * root) == num)
	{
		return (root);
	}

	if (root == num / 2)
	{
		return (-1);
	}

	return (find_sqrt(num, root + 1));
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: number to return the square root of
 *
 * Return: the natural square root of n if n
 * has a natural square root or --1 if
 * n doesn't have a natural square root
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
	{
		return (-1);
	}

	if (n == 1)
	{
		return (1);
	}

	return (find_sqrt(n, root));
}
