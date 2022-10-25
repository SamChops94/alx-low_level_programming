#include <stdio.h>
#include "main.h"

/**
 * int _strlen - Finds the lenght of a string.
 * @s:String pointer to the string whose lenght id to be found.
 * Return:lenght of string.
 */

int _strlen(char *s)
{
	int p = 0;
	/increment up to when the last character is NULL,\0/
	while (*(s + p) != 0)
	{
		p++;
	}
	return (p);
}
