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
	char *temp = dest;

	while (*src)
	{
		*dest  = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (temp);
}
