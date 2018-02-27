#include "holberton.h"
/**
 * binary_to_string - converts a number to binary and then into a string
 * @list: list argument
 *
 * Return: returns a string of number converted to binary. NULL on failure.
 */

char *binary_to_string(va_list list)
{
	unsigned int number, i;
	char *ptr, rem;

	number = va_arg(list, unsigned int);
	ptr = malloc(sizeof(char) * 33);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; number > 0; i++)
	{
		rem = number % 2 + '0';
		ptr[i] = rem;
		number /= 2;
	}
	ptr[i] = '\0';
	_strrev(ptr);
	return (ptr);
}
