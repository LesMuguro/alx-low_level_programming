#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - function to return a pointer to 2D array of integers
 * @width: the width
 * @height: the height
 * Return: the pointer to the 2D array of integers
 */
int **alloc_grid(int width, int height)
{
	int x, y;
	int **pointer;

	if (height == 0 && width == 0)
	{
		return (NULL);
	}

	pointer = malloc(sizeof(int *) * height);

	if (pointer == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < height; x++)
	{
		pointer[x] = malloc(sizeof(int) * width);

		if (pointer[x] == NULL)
		{
			for (; x >= 0; x--)
			{
				free(pointer[x]);
			}

			free(pointer);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
		{
			pointer[x][y] = 0;
		}
	}

	return (pointer);
}
