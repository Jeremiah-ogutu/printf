#ifndef MAIN_H 
#define MAIN_H
#include <stdarg.h>
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

#endif
