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

	char *string;

	unsigned int str_count;

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

			string = (va_arg(args, char *));

			for (str_count = 0; string[str_count] != '\0'; str_count++)
			{
				_putchar(string[str_count]);
			}
			i++;
		}

		/* to print integer using %i */
		else if (format[i] == '%' && format[i + 1] == 'i')
		{

			_putchar((char)va_arg(args, int));
			i++;

		}

			char_len += 1;
	}

	va_end(args);

	return (char_len);

}
