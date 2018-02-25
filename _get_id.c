#include "holberton.h"
/**
 * get_id_func - takes an identifier and returns a void pointer to function
 * @id: identifier passed to function
 *
 * Return: returns the corresponding print function
 */

void (*get_id_func)(char *identifier)(va_list)
{
	id_t ids[] = {
		{"%c", char_to_string},
		{"%s", string_to_string},
		{"%d", int_to_string},
		{"%i", int_to_string},
		{NULL, NULL}
	};
	int i = 0;

	while (ids[i] != NULL)
	{
		if (_strcmp(identifier, *ids[i].id) == 0)
			return (ids[i].f);
		i++;
	}
	return (NULL);
}
