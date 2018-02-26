#include "holberton.h"
/**
 * get_id_func - takes an identifier and returns a void pointer to function
 * @identifier: identifier passed to function
 *
 * Return: returns the corresponding print function
 */

char *(*get_id_func(char *identifier))(va_list)
{
	print_id ids[] = {
		{"%c", char_to_string},
		{"%s", string_to_string},
		{"%d", int_to_string},
		{"%i", int_to_string},
		{NULL, NULL}
	};
	int i = 0;

	if (identifier == NULL)
		return (NULL);
	while (ids[i].id != NULL)
	{
		if (_strcmp(identifier, ids[i].id) == 0)
			return (ids[i].f);
		i++;
	}
	return (NULL);
}
