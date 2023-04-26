#include "main.h"

/**
 * print_string - prints a string
 * @string: string param
 * Return: string length
 */

int print_string(char *string)
{
	int str_count;

	int str_len = 0;

 	for (str_count = 0; string[str_count] != '\0'; str_count++)
	{
		_putchar(string[str_count]);
		str_len += 1;
	}

	return (str_len);
}
