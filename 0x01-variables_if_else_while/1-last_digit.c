#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - function prints last digit of the number n
 *
 * Return: always 0
 **/
int main(void)
{
	int n;
	float ld;

	n = 0;
	ld = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (ld > 0.5)
	{
		printf("Last digit of %d is %f and is greater than 5\n", n, ld);
	}
	else if (ld == 0)
	{
		printf("Last digit of %d is %f and is zero\n", n, ld);
	}
	else if (ld < 0.5 && ld != 0)
	{
		printf("Last digit of %d is %f and is less than 6 and not 0\n", n, ld);
	}
	else
	{
		printf("Error\n");
	}

	return (0);
}
