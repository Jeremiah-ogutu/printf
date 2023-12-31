#include "main.h"
#include <stdio.h>
#include <limits.h>
/**
 *printf_binary-fuction that print the binary number
 *@val:argument holder for intager
 *Return:printed char
 */
int printf_binary(va_list val)
{
	unsigned int num = va_arg(val, unsigned int);
	int printed_chars = 0;
	int bitMask = 1;
	size_t i;

	for (i = 0; i < CHAR_BIT * sizeof(int); i++)
	{
		_putchar((num & bitMask) ? '1' : '0');
		printed_chars++;
		num >>= 1;
	}
	return (printed_chars);
}
