#include <stdio.h>
#include "main.h"

/**
 * _strlen - Finds the lenght of a string.
 * @s:String pointer to the string whose lenght id to be found.
 * Return:lenght of string.
 */

int _strlen(char *s)
{
	int p = 0;

	while (*(s + p) != 0)
	{
		p++;
	}
	return (p);
}
