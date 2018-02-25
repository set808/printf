#include "holberton.h"

/**
 * _strcpy - copies string from one pointer to a new pointer
 * @dest: the destination pointer for the copied string
 * @src: the origin pointer of the copied string
 *
 * Return: returns the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int counter = 0, a = 0;

	while (src[counter] != '\0')
	{
		counter++;
	}
	while (a <= counter)
	{
		dest[a] = src[a];
		a++;
	}
	return (dest);
}
