#include "main.h"

/**
 * printf_octal- function that prints the octal specifier
 * args:inter arguments
 * Return:the printed character
 */
int printf_octal(val_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int printedChar = 0;
	int i;
	char octal_str[12];

	snprintf(octal_str, sizeof(octal_str), "%0", num);

	for (i = 0; octal_str[i] != '\0'; i++)
	{
		_putchar(octal_str[i]);
		printed_chars++;
	}
	return (printedChar);
}

