#include "main.h"

/**
 * _strcpy - function to copy the string pointed at by src
 * @dest: pointer of type char
 * @src: pointer of type char
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int a = -1;

	do {
		a++;
		dest[a] = src[a];
	} while (src[a] != '\0');

	return (dest);
}
