#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - a function that frees up dynamically
 * allocated memory
 *
 * @d: pointer to the dog struct
 *
 * Return: no return value because void
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
