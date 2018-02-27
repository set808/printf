#include "holberton.h"

/**
 * locate_form - locate space and count
 * @s: all string passed to it
 * @index: current location of index
 * Return: the nuber of spaces
 */
int locate_form(const char *s, int index)
{
	int x;
	char *space;

	space = " ";
	for (x = 1; s[index + x] == space[0]; x++)
		;
	return (x - 1);
}

/**
 * print_string - it will print the sting using write
 * @format: all string passed to it
 * @arg: the list of arguments
 * @buffer: the buffer of the write
 * Return: the nuber of buffer size
 */
int print_string(const char *format, va_list arg, char *buffer)
{
	int buf_c = 0, form_c = 0, s_c = 0;
	char *str, *id;
	id_func f;

	while (format[form_c] != '\0')
	{
		if (format[form_c] == '%')
		{
			id = find_id(format, form_c);
			if (id[1] == '\0' && form_c == 0)
			{
				free(id);
				return (-1);
			}
			f = get_id_func(id);
			if (f == NULL)
				str = id;
			else
			{
				free(id);
				str = f(arg);
				if (str == NULL)
				{
					free(buffer);
					free(str);
					return (-1);
				}
			}
			for (s_c = 0; str[s_c] != '\0'; s_c++)
			{
				buffer[buf_c] = str[s_c];
				buf_c++;
			}
			form_c += (2 + locate_form(format, form_c));
			free(str);
		}
		else
		{
			buffer[buf_c] = format[form_c];
			buf_c++;
			form_c++;
		}
	}
	buffer[buf_c] = '\0';
	write(1, buffer, buf_c);
	free(buffer);
	return (buf_c);
}

/**
 * _printf - prints all the characters and arguments passed to it
 * @format: all the arguments passed depending on identifiers
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list arg;
	int count = 0;
	char *buffer;

	if (format == NULL)
		return (-1);
	buffer = create_buffer();
	if (buffer == NULL)
		return (-1);
	va_start(arg, format);
	count = print_string(format, arg, buffer);
	va_end(arg);
	return (count);
}
