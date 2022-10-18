#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase alphabets ten x
 */

void print_alphabet_x10(void)
{
	char lt;
	int count = 0;

	while (count++ <= '9')
	{
	for (lt = 'a'; lt ; <= 'z'; lt++)
		
		_putchar(lt);

	_pitchar('\n');
	}
}
