#include <stdio.h>

/**
 * main-program entry point.
 * Return:0 no success, non zero fail.
*/

int main(void)
{
	int i, k = '0', j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = k; j <= '9'; j++)
		{
			if (i != j)
			{
				putchar(i);
				putchar(j);
			}
			if (i == j)
			{
				continue;
			}
			if (i == '8' && j == '9')
			{
				break;
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
		k++;
	}
	puthcar('\n');
	return (0);
}
