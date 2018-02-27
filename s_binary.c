#include "holberton.h"
/**
 * _strrev - copies string from one pointer to a new pointer
 * @dest: the destination pointer for the copied string
 * @src: the origin pointer of the copied string
 *
 * Return: returns the pointer to dest
 */

char *_strrev(char *dest, char *src)
{
	unsigned int x, y;

	for (x = 0; src[x] != '\0'; x++)
		;
	y = 0;
	while (x >= 0)
	{
		dest[y] = src[x];
		x--;
		y++;
	}
	dest[y] = '\0';
	return (dest);
}

/**
 * binary_to_string - converts a number to binary and then into a string
 * list - list argument
 *
 * Return: returns a string of number converted to binary. NULL on failure.
 */

char *binary_to_string(va_list list)
{
	unsigned int number, rem, i;
	char *ptr, *rev;

	number = va_arg(list, unsigned int);
	ptr = malloc(sizeof(char) * 33);
	rev = malloc(sizeof(char) * 33);

	for (i = 0; number > 0; i++)
	{
		rem = number % 2;
		ptr[i] = rem;
		number /= 2;
	}
	_strrev(rev, ptr);
	free(ptr);
	return(rev);
}
