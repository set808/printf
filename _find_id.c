#include "holberton.h"
/**
 * find_id - finds identifier in strink
 * @s: string to be searched
 * @index: character to be found
 *
 * Return: returns a string containing an identifier
 */

char *find_id(const char *s, int index)
{
	char *found = malloc(sizeof(char) * 3);
	if (s == NULL || found == NULL)
		return (NULL);
	strcpy(found, "%a");

	found[1] = s[index + 1];
	return (found);
}
