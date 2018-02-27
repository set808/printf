#include "holberton.h"
/**
 * get_id_func - takes an identifier and returns a void pointer to function
 * @identifier: identifier passed to function
 *
 * Return: returns the corresponding print function
 */

id_func get_id_func(char *identifier)
{
	print_id ids[] = {
		{"%c", char_to_string},
		{"%s", string_to_string},
		{"%d", int_to_string},
		{"%i", int_to_string},
		{"%%", percent_to_string},
		{"%b", binary_to_string},
		{"%u", unsigned_int_to_string},
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
