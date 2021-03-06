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
	char c;

	c = va_arg(arg, int);
	if (c == 0)
		c = '\0';
	s = malloc(sizeof(char) * 2);
	if (s == NULL)
		return (NULL);
	s[0] = c;
	s[1] = '\0';
	return (s);
}
