#ifndef MAIN_H 
#define MAIN_H
#include <stdarg.h>
#include <stddef.h>
#include <string.h>
typedef struct format
{
	char *id;
	int (*f)();
} match;
int _putchar(char c);
int _printf(const char *format, ...);
int printf_char(va_list val);
int print_special_char(void);
int _strlenc(const char *str);
int _strlen(char *str);
int printf_integer(va_list args);
int printf_int(va_list args);
int print_string(va_list val);

#endif
