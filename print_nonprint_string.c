#include "main.h"

/**
 * printf_string_nonprint- fuction that prints a string with non printable char
 * args:agurment holder
 * Return:charachet printed
 */
int printf_string_nonprint(va_list args)
{
	int printedChar =0;
	char *str = va_arg(args, char *);
	int i;

	if (str == NULL)
	{
		return _putchar_str("(null)");
	}

	while (*str)
	{
		if (*str >= 32 && *str <127)
		{
			_putchar(*stre);
		}
		else 
		{
			_putchar('\\');
			 _putchar('x');
			 snprintf(hex_code,sizeof(hex_code), "%02x", *str);
			 for (i = 0; hex_code[i] != '\0'; i++)
			 {
				 _putchar(hex_code[i]);
			 }
		}
		printedChar++;
		str++;
	}
	return (printedChar);
}

