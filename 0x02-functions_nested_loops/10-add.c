#include "main.h"


/**
 * add - function to add to integers together
 *
 * @a: variable for integer
 * @b: variable for integer
 *
 * Return: the result
 *
 */
int add(int a, int b)
{
	int i;

	for (i = 1; i <= b; i++)
	{
		a++;
	}

	return (a);

}
