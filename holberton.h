#ifndef _PRINTF
#define _PRINTF
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * identifier - definition of _printf identifier
 * @id: the identifier
 * @f: function for identifier
 *
 */
typedef struct identifier
{
	char *id;
	void (*f)(va_list);
} print_id;

int _printf(const char *format, ...);
char *(*get_id_func(char *id))(va_list);
int _strcmp(char *s1, char *s2);
char *strcpy(char *dest, char *src);
char *find_id(char *s, int index);

#endif /* _PRINTF */
