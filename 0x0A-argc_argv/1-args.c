#include "main.h"
#include <stdio.h>

/**
 * main - function that prints the number of arguments
 * passed into it
 *
 * @argc: number of arguments
 * @argv: unused
 *
 * Return: always 0
 */
int main(int argc, char __attribute__ ((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
