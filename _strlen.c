#include "holberton.h"

/**
 * _strlen - count the length of string
 *
 * @s: Value of input of string
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;
	return (length);
}
