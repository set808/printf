#include "holberton.h"
/**
 * numlen - counts digits of a number
 * @n - number
 *
 * Return: returns count of digits
 */
int numlen(int n)
{
	int count = 0;
	int num = n;

	while (num > 9 || num < -9)
	{
		num /= 10;
		count++;
	}
	return (count);
}
/**
 * int_to_string - turns an integer into a string
 * @list: list where number is held
 *
 * Return: returns the number as a string. returns NULL if failed
 */

char *int_to_string(va_list list)
{
	int number, digits, tens, i, t, x;
	char *res;

	number = va_arg(list, int);
	digits = number;
	tens = 1;
	i = 0;
	t = 0;

	if (number < 0)
		t = 1;
	res = malloc(sizeof(char) * (numlen(digits) + t));
	if (res == NULL)
		return (NULL);
	if (number < 0)
	{
		res[i] = '-';
		i++;
	}

	for (x = 0; digits > 9 || digits < -9; x++)
	{
		digits /= 10;
		tens *= 10;
	}

	for (digits = number; x >= 0; x--)
	{
		if (digits < 0)
		{
			res[i] = (digits / tens) * -1 + '0';
			i++;
		}
		else
		{
			res[i] = (digits / tens) + '0';
			i++;
		}
		digits %= tens;
		tens /= 10;
	}
	res[i] = '\0';
	return (res);
}
