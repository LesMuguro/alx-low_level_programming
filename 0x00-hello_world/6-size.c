#include <stdio.h>

/**
 *
 * main - function to print the size of different data types
 * Return: always 0
 *
 */
int main(void)
{
	int i;
	long int li;
	long long int lli;
	char c;


	printf("Size of a char: %lu.\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu.\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu.\n", (unsigned long)sizeof(li));
	printf("Size of a long long int: %lu.\n", (unsigned long)sizeof(lli);

	return (0);
}
