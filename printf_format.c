#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdarg.h>

int _printf(const char *format, ...)
{
	match m[] = {
		{"%c", printf_char},
		{"%%", print_special_char}
	};
	 int printed_chars = 0;
	 size_t i;
	 int match_found;
	 va_list args;


	va_start(args, format);

	if (format == NULL ||(format[0] == '%' && format[1] == '\0'))
		return (-1);


	while (*format) 
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
			{
				break;
			}

			match_found = 0;

			for (i = 0; i < sizeof(m) / sizeof(m[0]); i++)
			{
				if (strcmp(format, m[i].id) == 0)
				{
					printed_chars += m[i].f(args);
					format += strlen(m[i].id) - 1;
					break;
				}
			}
			if (match_found)
			{format += strlen(m[i].id) - 1;
			}
		}
			else
			{
				_putchar(*format);
				printed_chars++;
			}
			format++;
		}
		va_end(args);
		return (printed_chars);
	}
