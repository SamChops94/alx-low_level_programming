#include "main.h"
/**
 * print_last_digit - prints last digit of a num
 * @n: the num being printed
 * Return: the value of the num
 */

int print_last_digit(int n)
{
	int x;

	x = n % 10;

	if (n < -1)

		x *= -1;
	_putchar(x + '0');

	return (x);
}

