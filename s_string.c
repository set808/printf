#include "holberton.h"

/**
 * string_to_string - gets arguments string copies it and return a string
 *
 * @arg: variable list of arguments
 *
 * Return: the copied string
 */
char *string_to_string(va_list arg)
{
	char *s, *c_s;

	s = va_arg(arg, char *);
	c_s = malloc(sizeof(char) * (_strlen(s) + 1));
	c_s = _strcpy(c_s, s);
	return (c_s);
}
