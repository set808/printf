#include "holberton.h"

/**
 * char_to_string - gets arguments character and converts it to string
 *
 * @arg: variable list of arguments
 *
 * Return: the string contianing the character
 */
char *char_to_string(va_list arg)
{
	char *s;

	s = malloc(sizeof(char) * 2);
	s[0] = va_arg(arg, int);
	s[1] = '\0';
	return (s);
}
