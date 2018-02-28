#include "holberton.h"
#include <stdio.h>

/**
 * siple_hex - turns an hexadecimal upper case into a string
 *
 * @c: input character
 *
 * Return: returns the hexa as a string. returns NULL if failed
 */
char *simple_hex(char c)
{
	unsigned int holder;
	char *hex;

	hex = malloc(sizeof(char) * 5);
	if (hex == NULL)
		return (NULL);
	hex[0] = '\\';
	hex[1] = 'x';
	if (c < 16)
	{
		hex[2] = '0';
		holder = c % 16;
		if (holder < 10)
			holder += '0';
		else
			holder += '7'; /*this is to convert 10 to A*/
		hex[3] = holder;
	}
	else
	{
		holder = c % 16;
		if (holder < 10)
			holder += '0';
		else
			holder += '7'; /*this is to convert 10 to A*/
		hex[3] = holder;
		c /= 16;
		holder = c % 16;
		if (holder < 10)
			holder += '0';
		else
			holder += '7'; /*this is to convert 10 to A*/
		hex[2] = holder;
	}
	hex[4] = '\0';
	return (hex);
}
/**
 * non_to_string - turns an non character to hex into a string
 *
 * @list: list where number is held
 *
 * Return: returns the hexa as a string. returns NULL if failed
 */
char *non_to_string(va_list list)
{
	char *str, *holder, *str_h;
	int i = 0, count = 0, count2 = 0;
	char c;

	str = va_arg(list, char *);
	while (str[i] != '\0')
	{
		c = str[i];
		if (!(c >= 32 && c < 127))
		{
			count++;
		}
		i++;
	}
	holder = malloc(sizeof(char) * (_strlen(str) + (3 * count) + 1));
	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (c >= 32 && c < 127)
		{
			holder[count] = c;
			count++;
			i++;
		}
		else
		{
			str_h = simple_hex(c);
			count2 = 0;
			while (str_h[count2] != '\0')
			{
				holder[count] = str_h[count2];
				count++;
				count2++;
			}
			free(str_h);
			i++;
		}
	}
	return (holder);
}
