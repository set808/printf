#include "holberton.h"

/**
 * long_hexadecimal - turns an long hexadecimal into a string
 *
 * @num: input number of long unsigned int
 *
 * Return: returns the hexa as a string. returns NULL if failed
 */
char *long_hexadecimal(long unsigned int num)
{
	long unsigned int holder, i = 0;
	char *hex;

	hex = malloc(sizeof(char) * 19);
	if (hex == NULL)
		return (NULL);
	if (num == 0)
	{
		hex = _strcpy(hex, "(nil)");
		return (hex);
	}
	while (num != 0)
	{
		holder = num % 16;
		if (holder < 10)
			holder += '0';
		else
			holder += 'W'; /*this is to convert 10 to a*/
		hex[i] = holder;
		num /= 16;
		i++;
	}
	hex[i++] = 'x';
	hex[i++] = '0';
	hex[i] = '\0';
	_strrev(hex);
	return (hex);
}

/**
 * address_to_string - turns an address to a string
 *
 * @list: list where number is held
 *
 * Return: returns the address as a string. returns NULL if failed
 */
char *address_to_string(va_list list)
{
	long unsigned int ad;
	char *str;

	ad = (long unsigned int)va_arg(list, void *);
	str = long_hexadecimal(ad);
	return (str);
}
