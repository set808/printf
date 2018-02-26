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
	id_func f;

	va_start(arg, format);
	buffer = create_buffer();
	while (format[form_c] != '\0')
	{
		if (format[form_c] == '%')
		{
			id = find_id(format, form_c);
			f = get_id_func(id);
			str = f(arg);
			if (id == NULL || str == NULL)
				return (0);
			free(id);
			s_c = 0;
			while (str[s_c] != '\0')
			{
				buffer[buf_c] = str[s_c];
				buf_c++;
				s_c++;
			}
			form_c += 2;
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
	buffer = _realloc(buffer, 1024, (unsigned int)(buf_c));
	write(1, buffer, buf_c);
	va_end(arg);
	free(buffer);
	return (buf_c);
}
