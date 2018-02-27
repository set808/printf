#include "holberton.h"

/**
 * rot13_to_string - turns an rot 13 into a string
 *
 * @list: list where number is held
 *
 * Return: returns the rot 13 as a string. returns NULL if failed
 */
char *rot13_to_string(va_list list)
{
	int count = 0, count_a;
	char *alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *str;

	str = string_to_string(list);
	while (str[count] != '\0')
	{
		count_a = 0;
		while (alpha[count_a] != '\0')
		{
			if (str[count] == alpha[count_a])
			{
				str[count] = rot13[count_a];
				break;
			}
			count_a++;
		}
		count++;
	}
	return (str);
}
