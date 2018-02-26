#include "holberton.h"

/**
 * _strcmp - compares 2 strings
 * @s1: first string
 * @s2: second string
 *
 * Return: Returns 0 if strings are same size. Positive difference if
 * s1 is greater than s2. Negative difference if s1 is smaller than s2.
 */

int _strcmp(char *s1, char *s2)
{
	/* check both strings size and determine if one is larger*/
	while ((*s1 == *s2) && *s1 != '\0' && *s2 != '\0')
	{
		s1++;
		s2++;
	}

	if (*s1 == '\0' && *s2 == '\0')
		return (0);
	else
		return ((int)(*s1 - *s2));
}
