#include "holberton.h"

/**
 * octal_to_string - turns an octal into a string
 *
 * @list: list where number is held
 *
 * Return: returns the octal as a string. returns NULL if failed
 */
char *octal_to_string(va_list list)
{
	unsigned int num, i = 0;
	char *oct;

	num = va_arg(list, unsigned int);
	oct = malloc(sizeof(char) * 12);
	if (oct == NULL)
		return (NULL);
	while (num != 0)
	{
		oct[i] = num % 8 + '0';
		num /= 8;
		i++;
	}
	oct[i] = '\0';
	_strrev(oct);
	return (oct);
}
