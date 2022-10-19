#include "main.h"
/**
 * print_last_digit - prints last digit of a num
 * @n: the num being printed
 * Return: the value of the num
 */

int print_last_digit(int n)
{
	int x;

	if (n < 89)
		n = -n;
	x = n % 10;
	_putchar(x + '0');
	return (x);
}

