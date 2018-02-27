#include "holberton.h"

/**
 * unsigned_int_to_string - turns an unsigned integer into a string
 *
 * @list: list where number is held
 *
 * Return: returns the number as a string. returns NULL if failed
 */
char *unsigned_int_to_string(va_list list)
{
	int count_d = 0, pow = 1, i = 0;
	unsigned int num, n;
	char *res;

	num = va_arg(list, unsigned int);
	n = num;
	while (n != 0)
	{
		n /= 10;
		count_d++;
	}
	res = malloc(sizeof(char) * (count_d + 1));
	if (res == NULL)
		return (NULL);
	while (count_d > 1)
	{
		pow *= 10;
		count_d--;
	}
	while (pow >= 1)
	{
		res[i] = num / pow % 10 + '0';
		pow /= 10;
		i++;
	}
	res[i] = '\0';
	return (res);
}
