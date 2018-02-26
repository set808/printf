#include "holberton.h"

/**
 * percent_to_string - gets arguments character and converts it to string
 *
 * @arg: variable list of arguments
 *
 * Return: the string contianing the character
 */
char *percent_to_string(va_list arg)
{
	char *s;

	s = malloc(sizeof(char) * 2);
	if (s == NULL)
		return (NULL);
	s[0] = '%';
	s[1] = '\0';
	(void)arg;
	return (s);
}
