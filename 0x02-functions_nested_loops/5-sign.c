#include "main.h"

/**
 * print_sign - checks for dign of a number
 * @n: the char being checked
 * Return: 1 if no error, 0 error
 */

int print_sign(int n)
{
	if (n > 0)
		_putchar('+');

		return (1);

	else if (n == 0)
		_putchar(0);

		return (0);
	else if (n < 0)
		_putchar('-');

		return (-1);
}
