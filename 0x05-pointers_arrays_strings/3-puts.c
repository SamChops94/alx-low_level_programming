#include <stdio.h>
#include "main.h"

/**
 * _puts - Prints a string, following by a new line.
 * @str:input string
 * Return: no return
 */

void _puts(char *str)
{
	int count = 0;

	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			putchar('\n');
			break;
		}
		putchar(str[count]);
		count++;
	}
}
