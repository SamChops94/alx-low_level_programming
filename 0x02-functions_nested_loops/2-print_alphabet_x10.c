#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase alphabets ten times
 */

void print_alphabet_x10(void)
{

	int count = 0

	char lt;

	while (count++ <= '9')

	{
	for (lt = 'a'; lt ; <= 'z'; lt++)

		_putchar(lt);
	_putchar('\n');
	}
}
