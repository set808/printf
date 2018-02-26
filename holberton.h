#ifndef _PRINTF
#define _PRINTF
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

typedef char * (*id_func)(va_list);

/**
 * struct identifier - definition of _printf identifier
 * @id: the identifier
 * @f: function for identifier
 *
 */
typedef struct identifier
{
	char *id;
	id_func f;
} print_id;

int _printf(const char *format, ...);
id_func get_id_func(char *id);
int _strcmp(char *s1, char *s2);
char *strcpy(char *dest, char *src);
char *find_id(const char *s, int index);
char *char_to_string(va_list arg);
char *string_to_string(va_list arg);
char *int_to_string(va_list list);
int _strlen(char *s);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

#endif /* _PRINTF */
