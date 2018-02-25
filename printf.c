#include "holberton.h"

/**
 * _printf - prints all the characters and arguments passed to it
 * @format: all the arguments passed depending on identifiers
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list arg;
	int buf_c = 0, form_c = 0, s_c = 0;
	char *buffer, *str, *id;

	va_start(arg, format);
	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
		return (0);
	while (format[form_c] != '\0')
	{
		if (format[form_c] == '%')
		{
			id = find_id(format, form_c);
			str = (*get_id_funct(id))(arg);
			free(id);
			if (id == NULL || str == NULL)
				return (0);
			while (str[s_c] != '\0')
			{
				buffer[buf_c] = str[s_c];
				buf_c++;
				s_c++;
			}
			form_c += (s_c - 1);
		}
		else
			buffer[buf_c] = format[form_c];
		free(str);
		buf_c++;
		form_c++;
	}
	buffer = _realloc(buffer, 1024, (unsigned)(buf_c));
	write(1, buffer, buf_c);
	va_end(arg);
	return (buf_c);
}
