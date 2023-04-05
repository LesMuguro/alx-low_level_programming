#include "main.h"

/**
 * print_chessboard - function that prints a chessboard
 *
 * @a: pointer for printing the pieces
 *
 * Return: no return because void
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{

		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}

		_putchar('\n');
	}
}
