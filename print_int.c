#include "main.h"

/**
 * print_int - prints an integer 
 * @number: number to print
 * Return: length of digitd
 */

int print_int(int number)
{
	int n, digit_len = 0;

	if (number > 0)
	{

	if (number == 0)
	{
		return (0);
	}
	else
	{
		n = number / 10;
	}

	print_int(n);
	_putchar(number % 10 + '0');

	}

	digit_len++;

	return(digit_len);	

}
