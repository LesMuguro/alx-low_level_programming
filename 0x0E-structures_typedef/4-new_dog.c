#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *_strcpy(char *dest, char *src);

/**
 * _strlen - function that returns the length of a string
 * @s: pointer to string to evaluate
 *
 * Return: returns length of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (*s++)
	{
		i++;
	}

	return (i);
}

/**
 * _strcpy - function that copies the string pointed to by src
 * with (\0) and buffer pointed to by dest included
 *
 * @dest: pointer to the buffer in which the string is copied
 * @src: string to be copied
 *
 * Return: returns the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - function to create a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: returns a pointer to the new dog if successful,
 * or a NULL if not successful
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->name = _strcpy(dog->name, name);
	dog->age = age;
	dog->owner = _strcpy(dog->owner, owner);

	return (dog);
}
