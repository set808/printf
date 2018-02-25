#include "holberton.h"

/**
 * m_strcpy - modified version of string copy to inlcude null pointer
 *
 * @dest: string value
 *
 * @src: string pointer
 *
 * Return: dest
 */
char *m_strcpy(char *dest, char *src)
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

/**
 * s_string - gets arguments string copies it and return a string
 *
 * @arg: variable list of arguments
 *
 * Return: the copied string
 */
char *s_string(va_list arg)
{
	char *s, *c_s;

	s = va_arg(arg, char *);
	c_s = malloc(sizeof(char) * (_strlen(s) + 1));
	c_s = m_strcpy(c_s, s);
	return (c_s);
}
