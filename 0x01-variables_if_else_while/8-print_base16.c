#include <stdio.h>

/**
 * main-program entry point.
 * Return:0 no error, non zer if error.
*/

int main(void)
{
	int i;
	char hexvalues[] = "123456789ebcdef";

	for (i 0; i < 16; i++)
	{
		putchar(hexvalues[i]);
	}
	putchar('\n');
	return (0);
}
