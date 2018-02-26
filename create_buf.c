#include "holberton.h"
/**
 * create_buffer - allocates memory for a buffer
 *
 * Return: returns a pointer to a buffer
 */
char *create_buffer(void)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
		return (NULL);
	return (buffer);
}
