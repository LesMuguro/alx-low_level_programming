#include <stdio.h>

/**
 * main - function to print numbers from 1 to 100 with
 * "Fizz", "Buzz" and "FizzBuzz" in the multiples of 3 and 5, and both
 *
 * Return: always 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%i", i);
		}

		if (i < 100)
		{
			printf(" ");
		}
	}

	printf("\n");
	return (0);
}
