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
	int last_digit;

	last_digit = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (last_digit > 5)
	{
		printf("Last digit of %d is %d and  is less than 6 and not 0\n", n, last_digit);
	}
	else if (last_digit == 0)
	{
		printf("Last digit of %d is %d and is zero\n", n, last_digit);
	}
	else if (last_digit < 6 && last_digit != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_digit);
	}
	else
	{
		printf("Error\n");
	}

	return (0);
}
