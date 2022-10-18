#include "main.h"

/**
 * _islower - checks for lower cased character
 *
 *c: is the char to be checked
 *
 * Return:1 if sucess, 0 error
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		
		return (0);
}
