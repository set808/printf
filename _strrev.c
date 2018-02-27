#include "holberton.h"
/**
 * _strrev - reverses a string
 * @s: string that will be reversed
 *
 */

void _strrev(char *s)
{
	char *rev, *reg, temp;
	int x, length;

	rev = s;
	reg = s;
	length = _strlen(s);

	for (x = 0; x < length - 1; x++)
		rev++;

	for (x = 0; x < length / 2; x++)
	{
		temp = *rev;
		*rev = *reg;
		*reg = temp;
		reg++;
		rev--;
	}
}
