#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - emulates the printf function
 * @format: character string
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	unsigned int i, char_len = 0;

	va_list args;

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
		}

		/* to print character using %c */
		else if (format[i] == '%' && format[i + 1] == 'c')
		{
			_putchar(va_arg(args, int));
			i++;
		}

		/* to print string using %s */
		else if (format[i] == '%' && format[i + 1] == 's')
		{
			int str_len = print_string(va_arg(args, char *));	
			char_len += str_len;
			i++;
		}	

		/* to print % */
		else if (format[i + 1] == '%')
		{
			_putchar('%');
			i++;
		}

		/* to print integer using %i & %d */
		else if (format[i] == '%' && format[i + 1] == 'i')
		{
			print_int(va_arg(args, int));
			i++;
		}
		else if (format[i] == '%' && format[i + 1] == 'd')
		{
			print_int(va_arg(args, int));
			i++;
		}
			char_len += 1;
	}

	va_end(args);

	return (char_len);

}
