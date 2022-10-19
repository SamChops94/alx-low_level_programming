#include "main.h"

/**
 * times_table  - prints nine times table
 * Return: 0
 */

void times_table(void)
{
	int nm, mlt, prd;


	for (nm = 0; nm <= 9; nm++)
	{
		_putchar('0');

		for (mlt = 1; mlt <= 9; mlt++)
		{
			_putchar(',');
			_putchar(' ');

			prd = nm * mlt;

			if (prd <= 9)

				_putchar(' ');
			else
				_putchar((prd / 10) + '0');
				_putchar((prd % 10) + '0');
		}
		_putchar('\n');
	}
}
