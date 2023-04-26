#include <unistd.h>
/**
 * _putchar - outputs a character
 * @a: character param
 * Return: int
 */

int _putchar(char a)
{
	return (write(1, &a, 1));

}
