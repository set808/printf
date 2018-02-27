#include "holberton.h"

/**
 * hexadecimal_to_string - turns an hexadecimal into a string
 *
 * @list: list where number is held
 *
 * Return: returns the hexa as a string. returns NULL if failed
 */
char *hexadecimal_to_string(va_list list)
{
	unsigned int num, holder, i = 0;
	char *hex;

	num = va_arg(list, unsigned int);
	hex = malloc(sizeof(char) * 9);
	if (hex == NULL)
		return (NULL);
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
	hex[i] = '\0';
	_strrev(hex);
	return (hex);
}
